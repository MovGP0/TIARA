/* Ghidra address: 017a5810 */
/* Ghidra symbol: FUN_017a5810 */


void FUN_017a5810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 unaff_R13;
  undefined7 uVar8;
  ulonglong uVar7;
  
  lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6f0));
  if ((lVar2 != 0) &&
     (lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6f0)), *(int *)(lVar2 + 0x18) != 100)) {
    uVar1 = FUN_006e2230(*(undefined8 *)(param_1 + 0x6f0),param_4,param_5);
    lVar2 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x6f0),param_4,param_5);
    if (lVar2 != 0) {
      lVar3 = FUN_006dd390(lVar2);
      uVar8 = (undefined7)((ulonglong)unaff_R13 >> 8);
      if (lVar3 == 0) {
        uVar7 = CONCAT71(uVar8,2);
      }
      else if (*(int *)(lVar2 + 0x18) == 0x65) {
        if (*(int *)(*(longlong *)(param_1 + 0x7c8) + 0x18) == 0x65) {
          uVar7 = CONCAT71(uVar8,4);
        }
        else {
          uVar7 = CONCAT71(uVar8,2);
        }
      }
      else {
        if (*(int *)(*(longlong *)(param_1 + 0x7c8) + 0x18) == 0x65) {
          return;
        }
        uVar7 = CONCAT71(uVar8,4);
      }
      if ((uVar1 & 0xfef7) != uVar1) {
        if ((*(ushort *)(param_1 + 2000) & 4) == 0) {
          plVar6 = (longlong *)FUN_006e2530(*(undefined8 *)(param_1 + 0x6f0));
          (**(code **)(*plVar6 + 0x20))(plVar6,lVar2,uVar7 & 0xffffffff);
          FUN_006dd070(lVar2,1);
        }
        else {
          uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
          FUN_0060bbf0(uVar4,6);
          if (*(int *)(*(longlong *)(param_1 + 0x7c8) + 0x18) == 0x65) {
            uVar5 = FUN_017a6600(param_1,lVar2);
            for (lVar2 = FUN_006dd580(*(undefined8 *)(param_1 + 0x7c8)); lVar2 != 0;
                lVar2 = FUN_006dd3e0(lVar2)) {
              FUN_007d5cb0(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(lVar2 + 0x28),uVar4);
              FUN_017a64f0(param_1,uVar4,uVar5);
            }
          }
          else {
            FUN_007d5cb0(*(undefined8 *)(param_1 + 0x780),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x7c8) + 0x28),uVar4);
            FUN_017a64f0(param_1,uVar4,lVar2);
          }
          FUN_00410f20(uVar4);
        }
      }
    }
  }
  return;
}

