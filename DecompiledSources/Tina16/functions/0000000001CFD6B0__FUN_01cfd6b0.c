/* Ghidra address: 01cfd6b0 */
/* Ghidra symbol: FUN_01cfd6b0 */


undefined1 FUN_01cfd6b0(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 local_39;
  undefined2 local_29 [12];
  undefined8 local_10;
  
  FUN_00417580(local_29,&DAT_01d36af8);
  iVar1 = FUN_01cfd2d0(param_1);
  if (param_2 < iVar1) {
    local_29[0] = *(undefined2 *)(param_1 + 0xba);
    local_10 = *(undefined8 *)(param_1 + 0xc0);
    local_39 = FUN_01d36f50(local_29,param_2,param_3);
  }
  else {
    *param_3 = 0;
    local_39 = 0;
  }
  FUN_00417740(local_29,&DAT_01d36af8);
  return local_39;
}

