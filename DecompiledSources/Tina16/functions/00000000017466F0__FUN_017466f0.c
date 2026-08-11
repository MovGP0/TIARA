/* Ghidra address: 017466f0 */
/* Ghidra symbol: FUN_017466f0 */


void FUN_017466f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int unaff_ESI;
  char unaff_DIL;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int local_70;
  int local_6c;
  undefined1 local_68 [28];
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 local_38;
  char local_31;
  char *local_30;
  
  iVar1 = (int)param_1[10];
  local_70 = *(int *)((longlong)param_1 + 0x54);
  puVar6 = &local_3c;
  FUN_01d04970(param_1[5],param_3,param_4,&local_38,puVar6,1);
  uVar7 = CONCAT71((int7)((ulonglong)puVar6 >> 8),*PTR_DAT_02001560);
  (**(code **)(*param_1 + 0x10))(param_1,local_68,param_2,*PTR_DAT_02002480,uVar7);
  uVar5 = FUN_00498310(local_38,local_3c);
  iVar3 = thunk_FUN_03f16006(local_68,uVar5);
  if (iVar3 != 0) {
    bVar2 = false;
    iVar3 = *(int *)((longlong)param_1 + 0x3c);
    local_6c = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar5 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),
                         local_70 + *(int *)((longlong)param_1 + 0x44));
        FUN_00498350(local_4c,iVar1,local_70,iVar1 + (int)param_1[8],uVar5);
        uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar5 = FUN_00498310(local_38,local_3c);
        iVar4 = thunk_FUN_03f16006(local_4c,uVar5);
        unaff_ESI = local_6c;
        if (iVar4 != 0) {
          unaff_DIL = '\x01';
          bVar2 = true;
          break;
        }
        iVar4 = iVar1 + (int)param_1[0xb];
        uVar7 = CONCAT44(uVar8,local_70 + *(int *)((longlong)param_1 + 0x44));
        FUN_00498350(local_4c,iVar4,local_70,iVar4 + (int)param_1[8],uVar7);
        uVar5 = FUN_00498310(local_38,local_3c);
        iVar4 = thunk_FUN_03f16006(local_4c,uVar5);
        if (iVar4 != 0) {
          unaff_DIL = '\0';
          bVar2 = true;
          break;
        }
        local_70 = local_70 + (int)param_1[0xb];
        iVar3 = iVar3 + -1;
        local_6c = local_6c + 1;
      } while (iVar3 != 0);
    }
    (**(code **)(*(longlong *)param_1[5] + 0x2d0))((longlong *)param_1[5],0,&local_30);
    if (bVar2) {
      local_31 = *local_30;
      if (unaff_DIL == '\0') {
        FUN_015f6410(unaff_ESI,&local_31);
      }
      else {
        FUN_015f63f0(unaff_ESI,&local_31);
      }
      if (local_31 != *local_30) {
        *local_30 = local_31;
        FUN_0173cbf0(1);
        if (param_1[6] != 0) {
          FUN_019af200(param_1[6],param_1[5]);
        }
        uVar5 = FUN_019a45d0();
        uVar5 = FUN_0198d430(uVar5);
        (**(code **)(*param_1 + 0x48))(param_1,uVar5);
        uVar5 = FUN_019a45d0();
        FUN_0199e310(uVar5,1,1,0);
        (**(code **)(*(longlong *)param_1[5] + 0x1c0))((longlong *)param_1[5],1,0);
        if (local_31 == '\0') {
          (**(code **)(*(longlong *)param_1[5] + 0xa0))((longlong *)param_1[5],param_2);
        }
      }
    }
  }
  return;
}

