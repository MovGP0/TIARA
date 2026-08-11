/* Ghidra address: 018b9090 */
/* Ghidra symbol: FUN_018b9090 */


void FUN_018b9090(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = (longlong *)0x0;
  if ((*(char *)((longlong)param_2 + 0xc5) != '\0') && ((*(byte *)(param_2 + 0x1a) & 2) != 0)) {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_01921f40);
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_2 + 0x318))(param_2), cVar2 != '\0')) {
      (**(code **)(*param_2 + 0x300))
                (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x20),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x48));
    }
    puVar6 = (undefined8 *)FUN_01803a30(param_3);
    if ((param_2[0x22] == 0) || (*(char *)(param_1 + 0x2f) != '\0')) {
      FUN_00410ae0(*param_2,puVar6 + 4);
      FUN_01952c40(param_2,local_30,0);
      FUN_00414ad0(puVar6 + 6,local_30[0]);
    }
    else {
      FUN_00414ad0(puVar6 + 4,param_2[0x1f]);
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x28) + 0x18) == '\0') {
        FUN_019525a0(param_2,&local_48,param_2[0x22]);
        FUN_00414ad0(puVar6 + 6,local_48);
      }
      else {
        uVar7 = FUN_0041b800(&local_20);
        cVar2 = FUN_00452370(param_2,&DAT_018b938c,uVar7);
        if (cVar2 != '\0') {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = lVar8 + 0x58;
          }
          (**(code **)(*local_20 + 0x18))(local_20,lVar8);
        }
        if ((*(byte *)(param_2 + 0x1a) & 4) == 0) {
          (**(code **)(*param_2 + 0x1e0))(param_2,&local_40,param_2[0x22]);
          FUN_00414ad0(puVar6 + 6,local_40);
        }
        else {
          FUN_01952c40(param_2,&local_38,param_2[0x22]);
          FUN_00414ad0(puVar6 + 6,local_38);
        }
      }
    }
    iVar3 = FUN_00414cb0(puVar6[4]);
    iVar4 = FUN_00414cb0(puVar6[6]);
    iVar5 = FUN_00410cb0(*puVar6);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0xa0);
    *piVar1 = *piVar1 + iVar3 + iVar4 + iVar5 + 0x10;
    iVar3 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))();
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar7 = (**(code **)(*(longlong *)param_2[0x10] + 0x20))((longlong *)param_2[0x10],iVar4);
        FUN_018b9090(param_1,uVar7,puVar6);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_48,4);
  FUN_0041b800(&local_20);
  return;
}

