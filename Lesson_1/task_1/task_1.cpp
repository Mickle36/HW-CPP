#include <iostream>
#include <fstream>
#include <string>

void creat_out_txt(int* arr_1, int* arr_2, int N, int M, std::ofstream& fout) {
	fout << M << "\n";

	for (int i = 0; i < M - 1; i++) {
		if (i == 0) {
			fout << arr_2[M - 1] << " ";
		}
		if (i < M) {
			fout << arr_2[i] << " ";
		}
		else {
			fout << arr_2[0];
		}
	}
	fout << "\n";
	
	fout << N << "\n";

	for (int i = 1; i < N + 1; i++) {
		if (i < N) {
			fout << arr_1[i] << " ";
		}
		else {
			fout << arr_1[0];
			fout << "\n";
		}
	}
	 delete[] arr_1;
	 delete[] arr_2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int N;
	int M;
	std::ifstream fin("in.txt");
	std::ofstream fout("out.txt");

	fin >> N;
	int* arr_1 = new int[N];

	for (int i = 0; i < N; i++) {
		fin >> arr_1[i];
	}

	fin >> M;
	int* arr_2 = new int[M];

	for (int i = 0; i < M; i++) {
		fin >> arr_2[i];
	}

	creat_out_txt(arr_1, arr_2, N, M, fout);

}

