/* Ghidra address: 0060b7b0 */
/* Ghidra symbol: FUN_0060b7b0 */


void FUN_0060b7b0(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_90 [4];
  undefined4 local_70;
  
  cVar2 = FUN_00609ee0(param_1);
  if (param_2 != cVar2) {
    lVar1 = param_1[0xc];
    if ((*(longlong *)(lVar1 + 0x10) == 0) && (*(longlong *)(lVar1 + 0x28) == 0)) {
      if (param_2 == '\x01') {
        *(undefined4 *)(lVar1 + 0x60) = 0;
      }
      else {
        *(undefined4 *)(lVar1 + 0x60) = 0x28;
      }
    }
    else {
      if (param_2 == '\0') {
        if ((*(longlong *)(lVar1 + 0x28) != 0) &&
           (*(longlong *)(lVar1 + 0x28) == *(longlong *)(lVar1 + 0x10))) {
          return;
        }
        FUN_0060a440(param_1);
        FUN_0060a750(param_1);
        FUN_0060a3b0(param_1);
        if (*(int *)(lVar1 + 8) == 1) {
          uVar3 = *(undefined8 *)(lVar1 + 0x28);
          *(undefined8 *)(lVar1 + 0x28) = 0;
          uVar4 = *(undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar1 + 0x20) = 0;
          FUN_0060ab20(param_1,uVar3,uVar4,lVar1 + 0x40,*(undefined1 *)(lVar1 + 0x39),0);
        }
        else {
          FUN_00608f90(param_1,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x20),
                       lVar1 + 0x40);
        }
      }
      else {
        if ((*(longlong *)(lVar1 + 0x10) != 0) &&
           (*(longlong *)(lVar1 + 0x10) != *(longlong *)(lVar1 + 0x28))) {
          return;
        }
        FUN_0060a440(param_1);
        FUN_0060a750(param_1);
        puVar6 = (undefined8 *)(lVar1 + 0x40);
        puVar7 = local_90;
        for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        local_70 = 0;
        bVar8 = *(int *)(lVar1 + 8) != 1;
        if (bVar8) {
          uVar3 = FUN_00608880(*(undefined8 *)(lVar1 + 0x20));
        }
        else {
          uVar3 = *(undefined8 *)(lVar1 + 0x20);
        }
        uVar4 = FUN_00607e60(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x20),uVar3,
                             local_90,0);
        if (bVar8) {
          FUN_0060ab20(param_1,uVar4,uVar3,local_90,*(undefined1 *)(lVar1 + 0x39),0);
        }
        else {
          *(undefined8 *)(lVar1 + 0x10) = uVar4;
        }
      }
      (**(code **)(*param_1 + 0x20))(param_1,param_1);
    }
  }
  return;
}

