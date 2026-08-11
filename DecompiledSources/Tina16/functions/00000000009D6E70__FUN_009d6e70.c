/* Ghidra address: 009d6e70 */
/* Ghidra symbol: FUN_009d6e70 */


undefined4 FUN_009d6e70(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_3 = 0;
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
    if (plVar5 == (longlong *)0x0) {
      FUN_0041b800(param_3);
    }
    else {
      cVar1 = (**(code **)(*plVar5 + 0x120))(plVar5);
      if (cVar1 == '\x01') {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x110))
                          (*(longlong **)(param_1 + 0x20),param_2);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
        if (lVar4 != 0) {
          lVar4 = FUN_009dab20(lVar4);
          if (lVar3 == lVar4) {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
            if (lVar4 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = lVar4 + 0x58;
            }
            FUN_0041b840(param_3,lVar4);
            goto LAB_009d6fc7;
          }
        }
        FUN_009d3370(param_3,lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20),0);
      }
      else {
        plVar5 = (longlong *)FUN_009530f0(&PTR_FUN_0090b468,1,0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x108))
                  (*(longlong **)(param_1 + 0x20),&local_28);
        (**(code **)(*plVar5 + 0x2c0))(plVar5,local_28);
        FUN_009d3370(param_3,plVar5,0,1);
      }
    }
  }
  else {
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
    FUN_009d3370(param_3,uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20),0);
  }
LAB_009d6fc7:
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

