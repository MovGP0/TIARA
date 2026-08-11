/* Ghidra address: 01794620 */
/* Ghidra symbol: FUN_01794620 */


undefined8 FUN_01794620(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_68 [24];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [24];
  
  plVar1 = (longlong *)FUN_004aeac0(param_2,0);
  (**(code **)(*plVar1 + 0x40))(plVar1,local_68);
  FUN_017ad620(&local_50,local_68);
  iVar4 = *(int *)(param_2 + 0x10) + -1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(param_2,iVar3);
      (**(code **)(*plVar1 + 0x40))(plVar1,local_68);
      FUN_017ad620(local_40,local_68);
      thunk_FUN_0408d40e(&local_50,&local_50,local_40);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_00498310((longlong)(local_50 + local_48) / 2 & 0xffffffff,
                       (longlong)(local_4c + local_44) / 2 & 0xffffffff);
  return uVar2;
}

