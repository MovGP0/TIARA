/* Ghidra address: 00699dd0 */
/* Ghidra symbol: FUN_00699dd0 */


void FUN_00699dd0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar8;
  undefined8 local_40;
  undefined1 local_34 [16];
  undefined1 local_24 [12];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  local_40 = 0;
  plVar3 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar3 + 0x90))(plVar3);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),local_34);
    cVar1 = FUN_0068f5c0(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 == '\0') {
      uVar4 = FUN_00777cd0();
      uVar2 = FUN_00779380(uVar4,0x1d);
      FUN_005fdab0(param_2[0x10],uVar2);
      (**(code **)(*param_2 + 0xa8))(param_2,local_34);
    }
    else {
      plVar3 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar3 + 200))(plVar3,local_24,0x10);
      uVar4 = FUN_00777cd0();
      uVar5 = FUN_00786090(param_1);
      uVar6 = FUN_005ffa40(param_2);
      uVar8 = 0;
      FUN_00778ec0(uVar4,uVar5,uVar6,local_24,in_stack_ffffffffffffff98 & 0xffffffffffffff00,0);
      FUN_005fdcb0(param_2[0x10],1);
    }
    plVar3 = (longlong *)FUN_00777cd0();
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    (**(code **)(*plVar3 + 0x1e8))(plVar3,local_24,(&DAT_01dfbcac)[uVar7 & 0xff]);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    cVar1 = FUN_004113d0(uVar4,&LAB_0067a0c8);
    if (cVar1 == '\0') {
      FUN_00785f90(param_1,&local_40);
    }
    else {
      FUN_0064dd90(uVar4,&local_40);
    }
    FUN_00785c70(param_1,param_2,local_24,local_40,local_34,
                 CONCAT44(uVar8,(uint)(*(ushort *)
                                        (&DAT_01dfbca6 +
                                        (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x10) + 0x490)
                                        * 2) | 0x10)));
  }
  FUN_00414480(&local_40);
  return;
}

