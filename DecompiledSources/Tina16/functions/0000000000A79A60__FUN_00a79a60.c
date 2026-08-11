/* Ghidra address: 00a79a60 */
/* Ghidra symbol: FUN_00a79a60 */


void FUN_00a79a60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_0069e100(param_2);
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (iVar1 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Printer not available");
    FUN_004134c0(uVar4);
  }
  uVar4 = FUN_0069dc70(param_2);
  uVar2 = thunk_FUN_03e5bd07(uVar4,0x58);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar4 = FUN_0069dc70(param_2);
  uVar2 = thunk_FUN_03e5bd07(uVar4,0x5a);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar4 = FUN_0069dc70(param_2);
  uVar2 = thunk_FUN_03e5bd07(uVar4,0x6e);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar4 = FUN_0069dc70(param_2);
  uVar2 = thunk_FUN_03e5bd07(uVar4,0x6f);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar4 = FUN_0069dc70(param_2);
  uVar2 = thunk_FUN_03e5bd07(uVar4,0x70);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar4 = FUN_0069dc70(param_2);
  uVar2 = thunk_FUN_03e5bd07(uVar4,0x71);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = FUN_0069df10(param_2);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = FUN_0069df40(param_2);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  return;
}

