#include "tasks.h"

/*	Task 04. The Number of hundreds [����� �����]
*
*	���� ����� ����� N, ���������� ����� ����� � �� (������ ����� � �����).
*	���� ����� ����� ���, �� ����� �������, ��� ����� ����� ����� ����.
*
*	������ ������� ������ [input]
*	�� ���� ������ ����� ����� ����� N � ��������� �++ ���� int.
*
*	������ �������� ������ [output]
*	�������� ���� ����� ����� - ����� �� ������.
*
*	[sample function input 1]: 456
*	[sample function output 1]: 4
*
*	[ input 2]: -1234567
*	[output 2]: 5
*
*	[ input 3]: 1000
*	[output 3]: 0
*
*	[ input 4]: -12
*	[output 4]: 0
*/

int task04(int number) {
	number = number < 0 ? -number : number;
	return number < 10 ? 0 : number / 100 % 10;
}