/* Ghidra address: 0068dba0 */
/* Ghidra symbol: FUN_0068dba0 */


void FUN_0068dba0(longlong *param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  undefined2 local_38;
  
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x260))(param_1);
  FUN_00659a30(param_1,param_2);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,1);
  if (cVar1 != '\0') {
    if (*param_2 == 0x1b) {
      uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_60,uVar6);
      (**(code **)(*local_60 + 0x50))(local_60);
    }
    else if ((ushort)(*param_2 - 0x20) < 0xffe0) {
      uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_50,uVar6);
      cVar1 = (**(code **)(*local_50 + 0x48))(local_50);
      if (cVar1 == '\0') {
        *param_2 = 0;
      }
      else {
        uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_004db130(&local_58,uVar6);
        (**(code **)(*local_58 + 0x58))(local_58);
      }
    }
  }
  if ((char)param_1[0x93] != '\0') {
    iVar3 = FUN_00427dd0();
    if (*(uint *)(param_1 + 0xa9) <= (uint)(iVar3 - (int)param_1[0x96])) {
      FUN_00414480(param_1 + 0x95);
    }
    uVar4 = FUN_00427dd0();
    *(undefined4 *)(param_1 + 0x96) = uVar4;
    if (*param_2 == 8) {
      while( true ) {
        uVar4 = 0;
        if (param_1[0x95] != 0) {
          uVar4 = *(undefined4 *)(param_1[0x95] + -4);
        }
        cVar1 = FUN_0044f380(param_1[0x95],uVar4);
        if (cVar1 != '\x02') break;
        uVar4 = 0;
        if (param_1[0x95] != 0) {
          uVar4 = *(undefined4 *)(param_1[0x95] + -4);
        }
        FUN_00416e20(param_1 + 0x95,uVar4,1);
      }
      uVar4 = 0;
      if (param_1[0x95] != 0) {
        uVar4 = *(undefined4 *)(param_1[0x95] + -4);
      }
      FUN_00416e20(param_1 + 0x95,uVar4,1);
    }
    else if ((*param_2 < 0xd800) || (0xdfff < *param_2)) {
      FUN_00416780(&local_78,*param_2);
      FUN_00416ad0(param_1 + 0x95,local_78);
    }
    else {
      uVar6 = FUN_0065b870(param_1);
      local_88 = CONCAT44(local_88._4_4_,1);
      iVar3 = thunk_FUN_04166556(local_48,uVar6,0x102,0x102);
      if (iVar3 != 0) {
        FUN_00416780(&local_68,*param_2);
        FUN_00416780(&local_70,local_38);
        local_88 = local_70;
        FUN_00416cd0(param_1 + 0x95,3,param_1[0x95],local_68);
        *param_2 = 0;
      }
    }
    iVar3 = 0;
    if (param_1[0x95] != 0) {
      iVar3 = *(int *)(param_1[0x95] + -4);
    }
    if (iVar3 < 1) {
      (**(code **)(*param_1 + 0x268))(param_1,0);
      pcVar7 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar7)(param_1);
    }
    else {
      FUN_0068da30(auStack_a8);
    }
    iVar3 = (**(code **)(*param_1 + 0x260))(param_1);
    if (iVar2 != iVar3) {
      uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db5e0(uVar6);
    }
  }
  FUN_00414560(&local_78,3);
  FUN_00417840(&local_60,&DAT_00484dc8,3);
  return;
}

