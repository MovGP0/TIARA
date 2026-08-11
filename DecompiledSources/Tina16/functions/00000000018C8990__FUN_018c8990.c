/* Ghidra address: 018c8990 */
/* Ghidra symbol: FUN_018c8990 */


void FUN_018c8990(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_28 = (longlong *)FUN_01967910(&PTR_FUN_01933ed0,1,0);
  (**(code **)(*local_28 + 0xd8))(local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30));
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))(*(longlong **)(param_1 + 0x40));
  (**(code **)(*local_28 + 0xe0))(local_28,uVar4);
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x90);
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128) + 0x80)
                      + 0x30))();
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128) + 0x80);
      uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,local_2c);
      cVar2 = FUN_004113d0(uVar4,&PTR_FUN_0192c3a0);
      if (cVar2 == '\0') {
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x128) + 0x80);
        uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,local_2c);
        FUN_004ae7e0(local_28[0x10],uVar4);
      }
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*local_28 + 0x198))(local_28,0,0);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))(*(longlong **)(param_1 + 0x40),local_28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x90) = local_20;
  (**(code **)(*(longlong *)local_28[0x10] + 0x10))((longlong *)local_28[0x10]);
  FUN_00410f20(local_28);
  return;
}

