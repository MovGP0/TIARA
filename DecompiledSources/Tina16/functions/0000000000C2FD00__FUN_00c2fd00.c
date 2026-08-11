/* Ghidra address: 00c2fd00 */
/* Ghidra symbol: FUN_00c2fd00 */


void FUN_00c2fd00(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  char local_31;
  longlong *local_30;
  
  local_40 = auStack_a8;
  local_60 = 0;
  local_58 = 0;
  do {
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,&local_31,1);
    if (iVar2 != 1) goto LAB_00c2ff68;
  } while (local_31 == '\0');
  do {
    if (local_31 == ';') {
code_r0x00c2ff4b:
      (**(code **)(*param_2 + 0x48))(param_2,0xffffffff,1);
LAB_00c2ff68:
      FUN_00414560(&local_60,2);
      return;
    }
    uVar5 = 0xffffffff;
    (**(code **)(*param_2 + 0x48))(param_2,0xffffffff,1);
    if ((byte)(local_31 - 0x20U) < 0x10) {
      bVar7 = ((int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) << (local_31 - 0x20U & 0x1f) &
              0x1002U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) {
      FUN_0041ddd0(&local_60,PTR_PTR_02003870);
      (**(code **)(*param_1 + 0x18))(param_1,1,local_60);
      goto code_r0x00c2ff4b;
    }
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    local_30 = (longlong *)FUN_00c28640(&LAB_00c14270,1,uVar5);
    (**(code **)(*local_30 + 0x30))(local_30,param_2);
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar3 = FUN_004b6da0(param_2);
    uVar4 = (**(code **)*param_2)(param_2);
    thunk_FUN_03f3ed25(uVar3,100,uVar4);
    local_88 = 0;
    FUN_004238d0(local_50,0,0,0);
    FUN_0041ddd0(&local_58,PTR_PTR_02002b90);
    pcVar6 = (code *)FUN_00411550(uVar5,0xfffd);
    local_88 = CONCAT31(local_88._1_3_,DAT_01e9f546);
    local_80 = local_50;
    local_78 = local_58;
    (*pcVar6)(uVar5,param_1,1);
    cVar1 = FUN_00c28880(local_30);
    if ((cVar1 != '\0') && (iVar2 = FUN_00c1aa10(local_30[0xb]), iVar2 == 0)) {
      FUN_00410f20(local_30);
    }
    do {
      iVar2 = (**(code **)(*param_2 + 0x18))(param_2,&local_31,1);
      if (iVar2 != 1) goto LAB_00c2ff68;
    } while (local_31 == '\0');
  } while( true );
}

