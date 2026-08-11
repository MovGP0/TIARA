/* Ghidra address: 00c2ddd0 */
/* Ghidra symbol: FUN_00c2ddd0 */


longlong FUN_00c2ddd0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_29 [9];
  
  iVar1 = FUN_004b6da0(param_2);
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_29,1);
  if (iVar2 == 1) {
    uVar3 = FUN_00c2dd60();
    lVar4 = FUN_00c2dcd0(uVar3,local_29[0]);
    do {
      lVar5 = lVar4;
      if (lVar5 == 0) break;
      lVar4 = (**(code **)(lVar5 + 0x48))(lVar5,param_2);
    } while (lVar4 != lVar5);
    FUN_004b6dc0(param_2,(longlong)iVar1);
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}

