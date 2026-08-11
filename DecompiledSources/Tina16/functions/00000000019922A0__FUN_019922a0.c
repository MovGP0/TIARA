/* Ghidra address: 019922a0 */
/* Ghidra symbol: FUN_019922a0 */


undefined1 FUN_019922a0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined1 local_89;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 local_6c;
  int local_5c;
  undefined1 local_58 [16];
  int local_48;
  
  local_89 = 0;
  local_98 = param_1;
  cVar1 = FUN_019921c0(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    FUN_00b94dc0(local_58,&PTR_FUN_00b94910,4,2);
    local_5c = 0;
    lVar5 = 0;
    iVar6 = 0;
    iVar7 = (int)local_98[2];
    if (-1 < iVar7 + -1) {
      do {
        uVar4 = FUN_00b94e60(local_98,iVar6);
        cVar1 = FUN_01992210(auStack_b8,uVar4);
        if (cVar1 != '\0') {
          lVar5 = FUN_00b94e60(local_98,iVar6);
          break;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if ((lVar5 == 0) && (local_48 + local_5c == 4)) {
      local_89 = 1;
      if (1 < local_48) {
        iVar7 = 2;
        do {
          if (0 < local_48) {
            local_80 = (longlong *)FUN_00b94e60(local_58,0);
            local_6c = (**(code **)(*local_80 + 0x1f8))(local_80,param_2,param_3);
            local_78 = (longlong *)0x0;
            iVar8 = local_48 + -1;
            iVar6 = 1;
            if (0 < iVar8) {
              do {
                local_88 = (longlong *)FUN_00b94e60(local_58,iVar6);
                uVar3 = (**(code **)(*local_88 + 0x1f8))(local_88,param_2,param_3);
                cVar1 = (**(code **)(*local_80 + 0x1e0))(local_80,local_6c);
                cVar2 = (**(code **)(*local_88 + 0x1e0))(local_88,uVar3);
                if (cVar1 == cVar2) {
                  local_78 = local_88;
                }
                iVar6 = iVar6 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            FUN_00b950f0(local_58);
            if (local_78 != (longlong *)0x0) {
              FUN_00b950f0(local_58,local_78);
              uVar3 = FUN_00b92120(param_2,param_3);
              FUN_017c2f00(local_78,uVar3,local_80);
              FUN_0198b6d0(local_98);
            }
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (0 < local_5c) {
        uVar4 = FUN_00c54610(0,&PTR_FUN_00c54448,param_2,param_3);
        (**(code **)(*local_98 + 0x20))(local_98,uVar4);
      }
    }
    iVar7 = local_48;
    if (-1 < local_48 + -1) {
      do {
        FUN_00b94ea0(local_58,0);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    FUN_00b94e30(local_58);
    FUN_00b95360(local_98);
  }
  return local_89;
}

