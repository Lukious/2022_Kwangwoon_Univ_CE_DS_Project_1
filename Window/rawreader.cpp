#include "stdio.h"
#pragma warning(disable:4996)

void main(void)
{
    int width = 512, height = 512;

    FILE* input_file, * output_file;

    unsigned char input_data[512][512];
    unsigned char output_data[512][512];


    // raw 파일 읽어오기
    input_file = fopen("./images/couple.raw", "rb");
    if (input_file == NULL)
    {
        printf("File not found!!\n");
        return;
    }
    fread(input_data, sizeof(unsigned char), width * height, input_file);


    // input 이미지를 역상으로 변환하여 저장
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            output_data[i][j] = 255 - input_data[i][j];
            //output_data[i][j] = input_data[i][j];


    // 변환한 이미지 저장
    output_file = fopen("./couple_change.raw", "wb");
    fwrite(output_data, sizeof(unsigned char), width * height, output_file);


    fclose(input_file);
    fclose(output_file);
}

//void main()
//{
//	FILE* fp_In = nullptr;
//	FILE* fp_Out = nullptr;
//
//	errno_t err_In = fopen_s(&fp_In, "./snoopy.raw", "rb");
//	if (0 == err_In)
//	{
//		//////////////////////////////////////////////////////////////////////
//		errno_t err_Out = fopen_s(&fp_Out, "./snoopy_change.raw", "wb");
//		if (0 == err_Out)
//		{
//			char	ch = 0;
//			// 원본 파일의 사이즈 복사
//
//			while (true)
//			{
//				int iCnt = fread(&ch, sizeof(char), 1, fp_In);
//				//ch += 10;
//				if (1 > iCnt)
//					break;
//				fwrite(&ch, sizeof(char), 1, fp_Out);
//			}
//
//
//			fclose(fp_Out);
//		}
//
//		//////////////////////////////////////////////////////////////////////
//
//		fclose(fp_In);
//	}
//	
//}