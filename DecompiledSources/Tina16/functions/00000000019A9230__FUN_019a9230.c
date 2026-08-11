/* Ghidra address: 019a9230 */
/* Ghidra symbol: FUN_019a9230 */


void FUN_019a9230(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40[0] = 0;
  local_48 = 0;
  local_70 = 0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_01996b00(0,&PTR_FUN_01984b68);
  FUN_0199e850(param_2,puVar4,0);
  iVar8 = *(int *)(param_2 + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_2,iVar7);
      cVar1 = FUN_0198a580(plVar5);
      if (cVar1 == '\x01') {
        (**(code **)(*plVar5 + 0x1f0))(plVar5,0,&local_2c,&local_30);
        iVar3 = FUN_019a7df0(param_1,param_2,puVar4,local_2c,local_30);
        if (iVar3 < 2) {
          FUN_00de8980(&local_48,0x97,*(undefined8 *)(param_1 + 0x450));
          FUN_00de8980(&local_70,0x3e3,*(undefined8 *)(param_1 + 0x450));
          local_68 = local_70;
          local_60 = 0x11;
          FUN_01d03640(plVar5,&local_78,*(undefined8 *)(param_1 + 0x450));
          local_58 = local_78;
          local_50 = 0x11;
          FUN_00442f70(local_40,local_48,&local_68,1);
          local_80 = plVar5;
          uVar6 = FUN_019a74e0(param_1,1,&local_80,0);
          (**(code **)(**(longlong **)(param_1 + 0x4b8) + 0x80))
                    (*(longlong **)(param_1 + 0x4b8),local_40[0],uVar6);
          *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + 1;
        }
      }
      if ((((*PTR_DAT_02001ab0 != '\0') && (cVar1 = FUN_0198a580(plVar5), cVar1 == '\x04')) &&
          (sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar2 == 0x39)) &&
         (((char)plVar5[0x34] == '\x01' && (*(longlong *)(plVar5[0x35] + 8) != 0)))) {
        FUN_019a9230(param_1,*(undefined8 *)(plVar5[0x35] + 8));
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar6 = (**(code **)*puVar4)(puVar4);
  FUN_004095f0(uVar6);
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_48,2);
  return;
}

