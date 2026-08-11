/* Ghidra address: 0077da30 */
/* Ghidra symbol: FUN_0077da30 */


void FUN_0077da30(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  
  *param_2 = 0x17;
  if (param_3 < 7) {
    if (param_3 == 6) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 6;
      goto LAB_0077db06;
    }
    if (param_3 == 2) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077db06;
    }
    if (param_3 == 3) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 3;
      goto LAB_0077db06;
    }
    if (param_3 == 4) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 4;
      goto LAB_0077db06;
    }
    if (param_3 == 5) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 5;
      goto LAB_0077db06;
    }
  }
  else {
    if (param_3 == 7) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 7;
      goto LAB_0077db06;
    }
    if (param_3 == 8) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 8;
      goto LAB_0077db06;
    }
    if (param_3 == 9) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 9;
      goto LAB_0077db06;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077db06:
  *(uint *)(param_2 + 8) = ((uint)param_3 - iVar1) + 1;
  return;
}

