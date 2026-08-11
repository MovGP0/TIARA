/* Ghidra address: 01c6d980 */
/* Ghidra symbol: FUN_01c6d980 */


void FUN_01c6d980(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  uint local_2c [3];
  
  FUN_01a64180(*(undefined8 *)(param_1 + 0x2510));
  if ((*(longlong *)(param_1 + 0x27a8) != 0) &&
     (lVar3 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8)), lVar3 != 0)) {
    local_40 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    uVar4 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0xa10),&local_40);
    plVar6 = *(longlong **)(param_1 + 7000);
    local_38 = uVar4;
    if (plVar6 != (longlong *)0x0) {
      local_38._4_4_ = (undefined4)(uVar4 >> 0x20);
      uVar1 = local_38._4_4_;
      cVar2 = (**(code **)(*plVar6 + 0x50))(plVar6,uVar4 & 0xffffffff,uVar1);
      if (cVar2 == '\0') {
        return;
      }
    }
    if (*(int *)(param_1 + 0x17f4) == 0) {
      uVar5 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a982d0(uVar5,local_38 & 0xffffffff,local_38._4_4_,local_2c,&local_30);
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x58))
                         (*(longlong **)(param_1 + 0x27a8),local_2c[0],local_30);
      if ((plVar6 != (longlong *)0x0) && (cVar2 = FUN_01d3be30(plVar6), cVar2 != '\0')) {
        cVar2 = FUN_0198a580(plVar6);
        if ((cVar2 == '\x04') && (cVar2 = (**(code **)(*plVar6 + 0x2d8))(plVar6), cVar2 != '\0')) {
          uVar5 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          cVar2 = (**(code **)(*(longlong *)plVar6[0x33] + 0x20))
                            ((longlong *)plVar6[0x33],uVar5,local_2c[0],local_30);
          if (cVar2 != '\0') {
            return;
          }
        }
        if ((*PTR_DAT_020052b8 != '\0') ||
           ((*PTR_DAT_02003b28 != '\0' && (*PTR_DAT_02001098 == '\0')))) {
          FUN_019943c0(*(undefined8 *)(param_1 + 0x27a8),plVar6);
          FUN_01993f30(*(undefined8 *)(param_1 + 0x27a8),plVar6,1,1);
        }
        FUN_01c77050(param_1,0);
        if ((*PTR_DAT_020052b8 != '\0') ||
           ((*PTR_DAT_02003b28 != '\0' && (*PTR_DAT_02001098 == '\0')))) {
          FUN_01994230(*(undefined8 *)(param_1 + 0x27a8));
        }
      }
    }
  }
  return;
}

