/* Ghidra address: 004af060 */
/* Ghidra symbol: FUN_004af060 */


void FUN_004af060(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong local_res8 [3];
  longlong *local_res20;
  int local_30;
  int local_2c;
  
  local_res8[0] = param_1;
  local_res20 = param_4;
  FUN_00419500(param_1);
  FUN_0041b910(local_res20);
  local_30 = param_2;
  local_2c = param_3;
  if (param_2 < param_3) {
    do {
      if (local_2c - local_30 == 1) {
        lVar6 = (longlong)local_30;
        lVar8 = (longlong)local_2c;
        iVar4 = (**(code **)(*local_res20 + 0x18))
                          (local_res20,*(undefined8 *)(local_res8[0] + lVar6 * 8),
                           *(undefined8 *)(local_res8[0] + lVar8 * 8));
        if (0 < iVar4) {
          uVar1 = *(undefined8 *)(local_res8[0] + lVar6 * 8);
          *(undefined8 *)(local_res8[0] + lVar6 * 8) = *(undefined8 *)(local_res8[0] + lVar8 * 8);
          *(undefined8 *)(local_res8[0] + lVar8 * 8) = uVar1;
        }
        break;
      }
      uVar1 = *(undefined8 *)(local_res8[0] + (longlong)(int)((uint)(local_30 + local_2c) >> 1) * 8)
      ;
      iVar4 = local_30;
      iVar7 = local_2c;
      do {
        while (iVar5 = (**(code **)(*local_res20 + 0x18))
                                 (local_res20,*(undefined8 *)(local_res8[0] + (longlong)iVar4 * 8),
                                  uVar1), iVar5 < 0) {
          iVar4 = iVar4 + 1;
        }
        while (iVar5 = (**(code **)(*local_res20 + 0x18))
                                 (local_res20,*(undefined8 *)(local_res8[0] + (longlong)iVar7 * 8),
                                  uVar1), 0 < iVar5) {
          iVar7 = iVar7 + -1;
        }
        if (iVar4 <= iVar7) {
          if (iVar4 != iVar7) {
            uVar2 = *(undefined8 *)(local_res8[0] + (longlong)iVar4 * 8);
            *(undefined8 *)(local_res8[0] + (longlong)iVar4 * 8) =
                 *(undefined8 *)(local_res8[0] + (longlong)iVar7 * 8);
            *(undefined8 *)(local_res8[0] + (longlong)iVar7 * 8) = uVar2;
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + -1;
        }
      } while (iVar4 <= iVar7);
      if (local_2c - iVar4 < iVar7 - local_30) {
        iVar5 = local_30;
        iVar3 = iVar7;
        if (iVar4 < local_2c) {
          FUN_004af060(local_res8[0],iVar4,local_2c,local_res20);
        }
      }
      else {
        iVar5 = iVar4;
        iVar3 = local_2c;
        if (local_30 < iVar7) {
          FUN_004af060(local_res8[0],local_30,iVar7,local_res20);
        }
      }
      local_2c = iVar3;
      local_30 = iVar5;
    } while (local_30 < local_2c);
  }
  FUN_00419430(local_res8,&DAT_004728e8);
  FUN_0041b800(&local_res20);
  return;
}

