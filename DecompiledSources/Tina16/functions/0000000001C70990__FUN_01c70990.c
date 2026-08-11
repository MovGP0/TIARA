/* Ghidra address: 01c70990 */
/* Ghidra symbol: FUN_01c70990 */


void FUN_01c70990(longlong *param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  plVar1 = (longlong *)param_1[0x36b];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3,param_4);
    uVar4 = FUN_0198d430(param_1[0x4f5]);
    FUN_01a982d0(uVar4,param_3,param_4,&local_54,&local_58);
    lVar5 = FUN_00498310(param_3,param_4);
    param_1[0x498] = lVar5;
    iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,0x15);
    iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
    local_60 = FUN_00498310(*(undefined4 *)(param_1[0x142] + 0x90),
                            *(undefined4 *)(param_1[0x142] + 0x94));
    local_50 = FUN_0064d1f0(param_1,&local_60);
    local_60 = FUN_00498310(*(undefined4 *)(param_1[0x142] + 0x98),
                            *(undefined4 *)(param_1[0x142] + 0x9c));
    local_48 = FUN_0064d1f0(param_1,&local_60);
    local_60 = FUN_00498310(param_3,param_4);
    local_40 = FUN_0064d1f0(param_1,&local_60);
    if (((iVar2 * -2 + 10000 < local_54) || ((int)local_40 < (int)local_48 + iVar2 * -2)) ||
       ((param_2 & 1) == 0)) {
      if (((iVar2 <= local_54) && ((int)local_40 <= (int)local_50 + iVar2)) && ((param_2 & 1) != 0))
      {
        uVar4 = FUN_0065b870(param_1[0x142]);
        thunk_FUN_041b2403(uVar4,0x114,0,0);
      }
    }
    else {
      uVar4 = FUN_0065b870(param_1[0x142]);
      thunk_FUN_041b2403(uVar4,0x114,1,0);
    }
    if (((iVar3 * -2 + 10000 < local_58) || (local_40._4_4_ < local_48._4_4_ + iVar3 * -2)) ||
       ((param_2 & 1) == 0)) {
      if (((iVar3 <= local_58) && (local_40._4_4_ <= local_50._4_4_ + iVar3)) &&
         ((param_2 & 1) != 0)) {
        uVar4 = FUN_0065b870(param_1[0x142]);
        thunk_FUN_041b2403(uVar4,0x115,0,0);
      }
    }
    else {
      uVar4 = FUN_0065b870(param_1[0x142]);
      thunk_FUN_041b2403(uVar4,0x115,1,0);
    }
  }
  return;
}

