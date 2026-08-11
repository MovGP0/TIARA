/* Ghidra address: 00d791d0 */
/* Ghidra symbol: FUN_00d791d0 */


void FUN_00d791d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (((char)param_1[0x25] == '\x02') && (cVar1 = FUN_00d5a0b0(param_1[0x24]), cVar1 != '\0')) {
    iVar2 = FUN_004230a0(param_1[0x24] + 0x10);
    FUN_00d77cb0(param_1,local_48);
    iVar3 = FUN_004230a0(local_48);
    if (iVar2 <= iVar3) {
      iVar2 = FUN_004230c0(param_1[0x24] + 0x10);
      FUN_00d77cb0(param_1,local_58);
      iVar3 = FUN_004230c0(local_58);
      if (iVar2 <= iVar3) goto LAB_00d79376;
    }
    FUN_00d77cb0(param_1,local_38);
    plVar6 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
    FUN_00d77cb0(param_1,local_68);
    uVar4 = FUN_004230a0(local_68);
    FUN_00d77cb0(param_1,local_78);
    uVar5 = FUN_004230a0(local_78);
    (**(code **)(*plVar6 + 0xe0))(plVar6,uVar4,uVar5);
    uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
    uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
    FUN_00423010(local_88,0,0,uVar4,uVar5);
    FUN_00d77b90(param_1,local_88);
    uVar7 = FUN_00609e10(plVar6);
    (**(code **)(*param_1 + 0xa8))(param_1,uVar7,&DAT_01ecf394);
    uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
    uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
    FUN_00423010(local_88,0,0,uVar4,uVar5);
    FUN_00d589a0(plVar6,param_2,local_38,local_88);
    FUN_00d77b90(param_1,local_38);
    FUN_00410f20(plVar6);
    return;
  }
LAB_00d79376:
  FUN_00d76a30(param_1,param_2,param_3);
  return;
}

