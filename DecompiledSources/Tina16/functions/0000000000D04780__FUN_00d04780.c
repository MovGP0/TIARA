/* Ghidra address: 00d04780 */
/* Ghidra symbol: FUN_00d04780 */


void FUN_00d04780(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  cVar3 = FUN_00d063e0(param_3);
  if (cVar3 == '\0') {
    FUN_00cbdf10(param_1);
  }
  if (param_1[0x20] != 0) {
    FUN_00c8ac30(*(undefined8 *)(param_1[0x20] + 0x108));
  }
  (**(code **)(*param_1 + 0xd8))(param_1,0);
  cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar3 != '\0') goto code_r0x00d04a90;
  (**(code **)(*param_1 + 0x158))(param_1,*(undefined1 *)(param_1[0x41] + 0x58));
  cVar3 = *(char *)(param_2 + 0x160);
  if (cVar3 == '\0') {
LAB_00d04896:
    plVar1 = (longlong *)param_1[0x20];
    cVar3 = FUN_004113d0(plVar1,&PTR_FUN_00cc2da8);
    if (cVar3 != '\0') {
      (**(code **)(*plVar1 + 0x210))(plVar1,1);
      FUN_00cc5380(param_1[0x41],&local_48);
      (**(code **)(*(longlong *)param_1[0x20] + 0x218))((longlong *)param_1[0x20],local_48);
    }
  }
  else if (cVar3 == '\x01') {
LAB_00d04903:
    if (param_1[0x20] == 0) {
      uVar4 = FUN_00cac580(&PTR_FUN_00ca96c8,&PTR_FUN_00cc2da8,param_1);
      (**(code **)(*param_1 + 200))(param_1,uVar4);
      if (param_1[0x20] == 0) {
        FUN_0041ddd0(&local_50,PTR_PTR_02004f08);
        uVar4 = FUN_0086dfd0(&PTR_FUN_00ca6658,1,local_50);
        FUN_004134c0(uVar4);
      }
      *(undefined1 *)(param_1 + 0x22) = 1;
      lVar2 = param_1[0x20];
      *(longlong *)(lVar2 + 0x78) = param_1[0xf];
      *(longlong *)(lVar2 + 0x80) = param_1[0x10];
    }
    else {
      cVar3 = FUN_004113d0(param_1[0x20],&PTR_FUN_00cc2da8);
      if (cVar3 == '\0') {
        FUN_0041ddd0(&local_58,PTR_PTR_02004f08);
        uVar4 = FUN_0086dfd0(&PTR_FUN_00ca6658,1,local_58);
        FUN_004134c0(uVar4);
      }
    }
    FUN_00cc5380(param_1[0x41],&local_60);
    (**(code **)(*(longlong *)param_1[0x20] + 0x218))((longlong *)param_1[0x20],local_60);
    (**(code **)(*(longlong *)param_1[0x20] + 0x210))
              ((longlong *)param_1[0x20],*(char *)(param_2 + 0x160) == '\x03');
  }
  else {
    if (cVar3 == '\x02') goto LAB_00d04896;
    if (cVar3 == '\x03') goto LAB_00d04903;
  }
  (**(code **)(*param_1 + 0x160))(param_1);
code_r0x00d04a90:
  FUN_00414560(&local_60,4);
  return;
}

