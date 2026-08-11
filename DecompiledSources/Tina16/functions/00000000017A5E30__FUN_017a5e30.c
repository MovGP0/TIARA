/* Ghidra address: 017a5e30 */
/* Ghidra symbol: FUN_017a5e30 */


void FUN_017a5e30(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  int local_38;
  char local_31;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x6f0);
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(local_20,6);
  uVar3 = FUN_006a6030();
  local_31 = FUN_006a5ff0(uVar3,2);
  if (local_31 != '\0') {
    uVar3 = FUN_006a6030();
    uVar3 = FUN_006a5da0(uVar3,2);
    (**(code **)(*local_20 + 0xd0))(local_20,2,uVar3,0);
    lVar4 = FUN_006e2530(local_40);
    if (lVar4 != 0) {
      lVar4 = FUN_006e2530(local_40);
      if ((*(int *)(lVar4 + 0x18) == 100) &&
         (cVar1 = (**(code **)(*local_20 + 0x40))(local_20), cVar1 != '\0')) {
        uVar3 = FUN_006e2530(local_40);
        FUN_017a6600(*(undefined8 *)(param_1 + 0x30),uVar3);
      }
      else {
        cVar1 = FUN_017a5d80(auStack_78);
        if ((cVar1 != '\0') &&
           ((lVar4 = FUN_006e2530(local_40), *(int *)(lVar4 + 0x18) == 100 ||
            ((lVar4 = FUN_006e2530(local_40), *(int *)(lVar4 + 0x18) == 0x65 &&
             (cVar1 = FUN_017a5df0(auStack_78), cVar1 != '\0')))))) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x780);
          local_30 = FUN_007d5160(&PTR_FUN_006441f8,1,*(undefined4 *)(lVar4 + 0x94),
                                  *(undefined4 *)(lVar4 + 0x90));
          FUN_007d5ad0(local_30,local_20,0x1fffffff);
          cVar1 = FUN_017a5df0(auStack_78);
          if (cVar1 == '\0') {
            uVar3 = FUN_006e2530(local_40);
            local_28 = FUN_017a6600(*(undefined8 *)(param_1 + 0x30),uVar3);
            iVar2 = (**(code **)(*local_20 + 0x60))(local_20);
            if (iVar2 != 0) {
              iVar2 = (**(code **)(*local_20 + 0x60))();
              iVar2 = iVar2 / *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x780) + 0x94);
              local_38 = 0;
              if (-1 < iVar2 + -1) {
                do {
                  FUN_007d5cb0(local_30,local_38,local_20);
                  FUN_017a64f0(*(undefined8 *)(param_1 + 0x30),local_20,local_28);
                  local_38 = local_38 + 1;
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
            }
          }
          else {
            FUN_007d5cb0(local_30,0,local_20);
            uVar3 = FUN_006e2530(local_40);
            FUN_017a64f0(*(undefined8 *)(param_1 + 0x30),local_20,uVar3);
          }
          FUN_00410f20(local_30);
        }
      }
    }
  }
  FUN_00410f20(local_20);
  return;
}

