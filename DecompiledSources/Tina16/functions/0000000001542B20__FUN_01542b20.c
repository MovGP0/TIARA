/* Ghidra address: 01542b20 */
/* Ghidra symbol: FUN_01542b20 */


undefined4 FUN_01542b20(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined8 local_res18 [2];
  undefined4 local_64c;
  short local_3c;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar2 = FUN_01d03160(param_1);
  uVar3 = FUN_01d39f20(uVar2);
  lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,uVar3);
  iVar1 = *(int *)(lVar5 + 0xaf);
  lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8);
  iVar6 = 1000000;
  uVar7 = (uint)*(byte *)(lVar5 + 0xb3);
  iVar4 = 0;
  if (-1 < (int)(uVar7 - 1)) {
    do {
      local_3c = (short)((ulonglong)
                         *(undefined8 *)
                          (*(longlong *)PTR_DAT_02001338 + -0x15 + (longlong)(iVar1 + iVar4) * 0x15)
                        >> 8);
      if (local_3c < iVar6) {
        iVar6 = (int)local_3c;
      }
      iVar4 = iVar4 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_3c = (short)((ulonglong)
                     *(undefined8 *)
                      (*(longlong *)PTR_DAT_02001338 + -0x15 +
                      (longlong)(iVar1 + param_2 + -1) * 0x15) >> 8);
  if (local_3c == iVar6) {
    local_64c = 1;
  }
  else {
    local_64c = 2;
  }
  FUN_00414480(local_res18);
  return local_64c;
}

