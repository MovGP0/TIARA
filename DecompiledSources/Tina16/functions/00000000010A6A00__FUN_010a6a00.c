/* Ghidra address: 010a6a00 */
/* Ghidra symbol: FUN_010a6a00 */


void FUN_010a6a00(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  
  local_50[0] = 0;
  local_58 = 0;
  local_40[0] = 0;
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0xb8) != 0) {
    FUN_006ded30(*(undefined8 *)(*(longlong *)(param_1 + 0x920) + 0x550));
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa00) + 0x28))();
    local_60 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0xa00) + 0x18))
                  (*(longlong **)(param_1 + 0xa00),local_40,local_60);
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0xb8);
        uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,local_60);
        lVar5 = FUN_004113f0(uVar4,&DAT_01618348);
        uVar4 = FUN_006def00(*(undefined8 *)(*(longlong *)(param_1 + 0x920) + 0x550),0,local_40[0]);
        iVar6 = *(int *)(lVar5 + 0x14);
        local_5c = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar1 = *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 8 + (longlong)local_5c * 0x10);
            FUN_00b8fd60(local_50,*(undefined8 *)
                                   (*(longlong *)(lVar5 + 0x20) + (longlong)local_5c * 0x10),
                         *(undefined1 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94),0,1);
            FUN_00b8fd60(&local_58,uVar1,
                         *(undefined1 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94),0,1);
            FUN_00416cd0(local_40,4,L"time=",local_50[0],L", value=",local_58);
            FUN_006dee40(*(undefined8 *)(*(longlong *)(param_1 + 0x920) + 0x550),uVar4,local_40[0]);
            local_5c = local_5c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_60 = local_60 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  return;
}

