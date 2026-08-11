/* Ghidra address: 01b38990 */
/* Ghidra symbol: FUN_01b38990 */


void FUN_01b38990(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_128 [264];
  longlong local_20 [2];
  
  local_20[0] = 0;
  if (param_1 == -1) {
    FUN_00414ad0(param_2,L" NC0");
  }
  else {
    FUN_0040e840(local_128,param_1);
    FUN_004169a0(local_20,local_128);
    iVar1 = 0;
    if (local_20[0] != 0) {
      iVar1 = *(int *)(local_20[0] + -4);
    }
    FUN_00414ad0(param_2,&DAT_01b38a98);
    if (1 < -iVar1 + 6) {
      iVar1 = -iVar1 + 5;
      do {
        FUN_00416ad0(param_2,&DAT_01b38aa8);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00416ad0(param_2,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

