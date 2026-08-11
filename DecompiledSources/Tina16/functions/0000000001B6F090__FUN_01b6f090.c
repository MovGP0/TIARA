/* Ghidra address: 01b6f090 */
/* Ghidra symbol: FUN_01b6f090 */


undefined1
FUN_01b6f090(longlong param_1,byte param_2,undefined1 *param_3,char param_4,undefined8 *param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_19;
  
  local_40 = auStack_68;
  local_19 = 0;
  if (*(char *)(param_1 + 0x9cd) == '\0') {
    if (*(char *)(param_1 + 0x9cc) == '\0') {
      *(undefined1 *)(param_1 + 0x9cd) = 1;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
      iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar3 + -1 < (int)(uint)param_2) {
        local_19 = 2;
        FUN_01b6f320(0,local_40);
        return local_19;
      }
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x260))
                        (*(longlong **)(param_1 + 0x910));
      if (uVar4 != param_2) {
        (**(code **)(**(longlong **)(param_1 + 0x910) + 0x268))
                  (*(longlong **)(param_1 + 0x910),(uint)param_2);
        FUN_01b6e800(param_1,param_1);
      }
      if (param_4 == '\0') {
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0x958),1);
        (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0xa8))(*(longlong **)(param_1 + 0x9d8),0x6e)
        ;
      }
      else {
        FUN_0082a6c0(*(undefined8 *)(param_1 + 0x958),0);
        (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0xa8))(*(longlong **)(param_1 + 0x9d8),0x6f)
        ;
        (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x88))
                  (*(longlong **)(param_1 + 0x9d8),*param_3);
      }
      if (*(char *)(param_1 + 0x9ca) == 'l') {
        local_19 = 2;
      }
      else {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x70))
                          (*(longlong **)(param_1 + 0x9d8),param_5);
        if (cVar2 == '\0') {
          local_19 = 2;
        }
        else {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 8);
          iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar3 != 0) {
            plVar1 = *(longlong **)(param_1 + 0x9d8);
            uVar5 = (**(code **)(*plVar1 + 0x60))(plVar1);
            uVar6 = (**(code **)(*(longlong *)plVar1[1] + 0x30))((longlong *)plVar1[1],uVar5);
            lVar7 = FUN_004113f0(uVar6,&PTR_FUN_011057c0);
            *(undefined1 *)(param_1 + 0x9b8) = *(undefined1 *)(lVar7 + 0x2a);
          }
          local_19 = 1;
          if ((*(char *)(param_1 + 0x9cc) == '\0') && (*(char *)(param_1 + 0x9ce) == '\0')) {
            *(undefined8 *)(param_1 + 0x9e8) = *param_5;
            FUN_01b6eb40(param_1,*(undefined8 *)(param_1 + 0x9e8));
          }
          else {
            local_19 = 3;
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x9cd) = 0;
  }
  return local_19;
}

