/* Ghidra address: 018c6300 */
/* Ghidra symbol: FUN_018c6300 */


undefined1 FUN_018c6300(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_34;
  undefined8 local_30;
  int local_28;
  undefined1 local_21;
  
  local_40 = auStack_68;
  local_21 = 0;
  local_34 = 0;
  local_30 = 0;
  cVar3 = FUN_018c5be0(param_1);
  if (cVar3 != '\0') {
    FUN_0196d300(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x170));
    lVar1 = *(longlong *)(param_1 + 0x40);
    FUN_01973030(lVar1,lVar1,*(undefined8 *)(lVar1 + 0x450),0);
    if ((param_2 == '\0') || (cVar3 = FUN_018c6630(param_1), cVar3 != '\0')) {
      local_21 = 1;
      if (param_4 == 0) {
        iVar4 = FUN_0196f500();
        local_28 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar6 = FUN_0196f4e0(*(undefined8 *)(param_1 + 0x40),local_28);
            cVar3 = FUN_004113d0(uVar6,&PTR_FUN_01934910);
            if (cVar3 != '\0') {
              uVar6 = FUN_0196f4e0(*(undefined8 *)(param_1 + 0x40),local_28);
              *(undefined8 *)(param_1 + 0x128) = uVar6;
              (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                        (*(longlong **)(param_1 + 0x38),uVar6);
              (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                        (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x128));
            }
            local_28 = local_28 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        *(longlong *)(param_1 + 0x128) = param_4;
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                  (*(longlong **)(param_1 + 0x38),param_4);
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x128));
      }
      cVar3 = FUN_01978990(param_1);
      *(bool *)(param_1 + 0x18) = cVar3 == '\0';
      *(undefined4 *)(param_1 + 0x60) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))(*(longlong **)(param_1 + 0x38));
      iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x38))(*(undefined8 **)(param_1 + 0x38));
      if ((0 < iVar4) && (cVar3 = FUN_01978990(param_1), cVar3 != '\0')) {
        FUN_018ba6c0(*(undefined8 *)(param_1 + 0x38),&local_34,&local_30);
      }
      FUN_018c67a0(param_1,param_4);
      cVar3 = FUN_01978990(param_1);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)**(undefined8 **)(param_1 + 0x38))(*(undefined8 **)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x60) = uVar5;
        iVar4 = (**(code **)**(undefined8 **)(param_1 + 0x38))(*(undefined8 **)(param_1 + 0x38));
        plVar2 = *(longlong **)(param_1 + 0x38);
        *(int *)((longlong)plVar2 + 0xc) = iVar4 + -1;
        (**(code **)(*plVar2 + 0x60))(plVar2);
        if (-1 < *(int *)(*(longlong *)(param_1 + 0x38) + 0xc)) {
          FUN_018ba320(*(longlong *)(param_1 + 0x38),local_34,local_30,1);
        }
        (**(code **)(**(longlong **)(param_1 + 0x98) + 8))(*(longlong **)(param_1 + 0x98));
        *(undefined1 *)(param_1 + 0x18) = 1;
        FUN_018c67a0(param_1,param_4);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x40);
    FUN_01973030(lVar1,lVar1,*(undefined8 *)(lVar1 + 0x458),0);
  }
  FUN_018c60f0(param_1);
  return local_21;
}

