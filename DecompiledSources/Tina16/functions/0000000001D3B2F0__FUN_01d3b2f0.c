/* Ghidra address: 01d3b2f0 */
/* Ghidra symbol: FUN_01d3b2f0 */


void FUN_01d3b2f0(longlong *param_1,double param_2,double param_3,double param_4,int param_5)

{
  undefined1 *puVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  longlong local_90;
  int local_84;
  double local_80;
  double local_78;
  double local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  double local_20;
  
  local_a0 = auStack_c8;
  local_90 = 0;
  local_84 = (int)param_1[2] + -1;
  puVar1 = auStack_c8;
  local_20 = param_2;
  if (-1 < local_84) {
    do {
      local_a0 = puVar1;
      uVar4 = FUN_00b94e60(param_1,local_84);
      cVar3 = FUN_01d3b2d0(auStack_c8,uVar4);
      if (cVar3 != '\0') {
        local_90 = FUN_00b94e60(param_1,local_84);
        break;
      }
      local_84 = local_84 + -1;
      puVar1 = local_a0;
    } while (local_84 != -1);
  }
  local_50 = local_90;
  local_90 = 0;
  local_84 = (int)param_1[2] + -1;
  local_20 = param_3;
  if (-1 < local_84) {
    do {
      uVar4 = FUN_00b94e60(param_1,local_84);
      cVar3 = FUN_01d3b2d0(auStack_c8,uVar4);
      if (cVar3 != '\0') {
        local_90 = FUN_00b94e60(param_1,local_84);
        break;
      }
      local_84 = local_84 + -1;
    } while (local_84 != -1);
  }
  local_58 = local_90;
  if ((local_50 != 0) && (local_90 != 0)) {
    local_64 = (**(code **)(*param_1 + 0x18))(param_1,local_50);
    local_68 = (**(code **)(*param_1 + 0x18))(param_1,local_58);
    local_80 = param_3 - param_2;
    local_5c = 1;
    if (0 < param_5) {
      do {
        local_60 = local_64;
        if (local_64 <= local_68) {
          iVar6 = (local_68 - local_64) + 1;
          do {
            dVar2 = param_2;
            if (local_60 != local_64) {
              lVar5 = FUN_00b94e60(param_1,local_60);
              dVar2 = *(double *)(lVar5 + 8);
            }
            local_70 = dVar2;
            dVar2 = param_3;
            if (local_60 + 1 <= local_68) {
              lVar5 = FUN_00b94e60(param_1,local_60 + 1);
              dVar2 = *(double *)(lVar5 + 8);
            }
            local_78 = dVar2;
            if (param_4 < local_78 + (double)local_5c * local_80) {
              lVar5 = FUN_00b94e60(param_1,local_60);
              FUN_01d3ad60(param_1,local_70 + (double)local_5c * local_80,param_4,
                           *(undefined1 *)(lVar5 + 0x10));
              return;
            }
            lVar5 = FUN_00b94e60(param_1,local_60);
            FUN_01d3ad60(param_1,local_70 + (double)local_5c * local_80,
                         local_78 + (double)local_5c * local_80,*(undefined1 *)(lVar5 + 0x10));
            local_60 = local_60 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_5c = local_5c + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  return;
}

