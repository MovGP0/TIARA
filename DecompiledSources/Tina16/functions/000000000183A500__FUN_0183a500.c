/* Ghidra address: 0183a500 */
/* Ghidra symbol: FUN_0183a500 */


void FUN_0183a500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_0181e3e0();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = FUN_0181e3c0(param_2,iVar5);
      FUN_01837010(param_1,uVar3);
      lVar4 = FUN_0181e3c0(param_2,iVar5);
      iVar2 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x18),L"ident");
      if (iVar2 == 0) {
        uVar3 = FUN_0181e3c0(param_2,iVar5);
        FUN_0181e5f0(uVar3,&local_20,L"text");
        FUN_01837080(param_1,param_3,local_20);
        uVar3 = FUN_01837b00(param_1,param_2,param_3,local_20,param_4,0,0);
        FUN_0184caa0(param_3,local_20,uVar3);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_20);
  return;
}

