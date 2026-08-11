/* Ghidra address: 0065acb0 */
/* Ghidra symbol: FUN_0065acb0 */


ulonglong FUN_0065acb0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 local_50;
  undefined4 local_44 [7];
  undefined1 local_28 [16];
  
  cVar1 = FUN_0044f0c0(6,3);
  if (cVar1 == '\0') {
    return (ulonglong)*(uint *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  }
  if (param_2 != 0) {
    param_1 = param_2;
  }
  local_44[0] = 0x2c;
  lVar3 = FUN_0065b870(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_03f78330(uVar4,local_44);
    if (iVar2 != 0) {
      local_50 = FUN_00423530(local_28);
      lVar3 = FUN_00809b30(*(undefined8 *)PTR_DAT_02005950,&local_50,0);
      goto LAB_0065ad53;
    }
  }
  lVar3 = FUN_00809ba0(*(undefined8 *)PTR_DAT_02005950,
                       *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),0);
LAB_0065ad53:
  if (lVar3 == 0) {
    uVar5 = (ulonglong)*(uint *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  }
  else {
    uVar5 = FUN_008078c0(lVar3);
  }
  return uVar5;
}

