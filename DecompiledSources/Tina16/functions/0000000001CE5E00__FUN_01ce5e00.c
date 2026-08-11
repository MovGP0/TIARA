/* Ghidra address: 01ce5e00 */
/* Ghidra symbol: FUN_01ce5e00 */


void FUN_01ce5e00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,char *param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30;
  
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30 = 0;
  uVar4 = FUN_006d8710(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbd8) + 0x490)
                       ,0);
  FUN_006d85c0(uVar4,0);
  cVar2 = *(char *)(param_1 + 0x58);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if ((param_5 == '\0') &&
         (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))
                            (*(longlong **)(param_1 + 0x80)), 0 < iVar3)) {
        do {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                            (*(longlong **)(param_1 + 0x80),iVar3 + -1);
          plVar5 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_01aaff18);
          lVar1 = plVar5[2];
          cVar2 = (**(code **)(*plVar5 + 0x90))(plVar5,param_2,param_3,param_4);
          if (cVar2 != '\0') {
            FUN_01ab6de0(plVar5,local_40);
            iVar7 = 0;
            if (local_40[0] != 0) {
              iVar7 = *(int *)(local_40[0] + -4);
            }
            if (iVar7 < 1) {
              uVar4 = FUN_006d8710(*(undefined8 *)
                                    (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbd8) + 0x490),0
                                  );
              uVar6 = FUN_00b89270();
              FUN_00b8e520(uVar6,&local_58,0x823);
              uVar6 = FUN_00b89270();
              FUN_00b8e520(uVar6,&local_60,0x824);
              FUN_00416ad0(&local_58,local_60);
              FUN_006d85c0(uVar4,local_58);
            }
            else {
              uVar4 = FUN_006d8710(*(undefined8 *)
                                    (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xbd8) + 0x490),0
                                  );
              uVar6 = FUN_00b89270();
              FUN_00b8e520(uVar6,&local_48,0x823);
              FUN_01ab6de0(plVar5,&local_50);
              FUN_00416ad0(&local_48,local_50);
              FUN_006d85c0(uVar4,local_48);
            }
          }
          if ((*param_6 == '\0') || ((char)lVar1 != (char)plVar5[2])) {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
          *param_6 = cVar2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      goto code_r0x01ce60e1;
    }
    if (5 < (byte)(cVar2 - 2U)) goto code_r0x01ce60e1;
  }
  if ((param_5 == '\0') &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80)),
     0 < iVar3)) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar3 + -1);
      plVar5 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_01d282a8);
      lVar1 = plVar5[2];
      (**(code **)(*plVar5 + 0x90))(plVar5,param_2,param_3,param_4);
      if ((*param_6 == '\0') || ((char)lVar1 != (char)plVar5[2])) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      *param_6 = cVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
code_r0x01ce60e1:
  FUN_00414560(&local_60,5);
  FUN_00414480(&local_30);
  return;
}

