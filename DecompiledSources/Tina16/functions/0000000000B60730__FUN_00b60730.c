/* Ghidra address: 00b60730 */
/* Ghidra symbol: FUN_00b60730 */


void FUN_00b60730(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x35) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x44) = 1;
    local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8);
    iVar3 = FUN_00b258c0(uVar1);
    FUN_004b8ba0(local_20,uVar1,(longlong)iVar3);
    while( true ) {
      cVar2 = FUN_00b606e0(auStack_58);
      if (cVar2 == '\0') break;
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8);
      iVar3 = FUN_00b258c0(uVar1);
      FUN_004b8ba0(local_20,uVar1,(longlong)iVar3);
    }
    FUN_004b6dc0(local_20,0);
    FUN_00b42210(*(undefined8 *)(param_1 + 0xa0),local_20);
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  return;
}

