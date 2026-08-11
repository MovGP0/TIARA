/* Ghidra address: 017a5ac0 */
/* Ghidra symbol: FUN_017a5ac0 */


void FUN_017a5ac0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_3a [2];
  longlong *local_38;
  longlong local_30;
  int local_24;
  
  local_60 = auStack_98;
  local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x6f0);
  lVar2 = FUN_006e2530(local_58);
  if ((lVar2 != 0) &&
     (((lVar2 = FUN_006e2530(local_58), *(int *)(lVar2 + 0x18) == 100 ||
       (lVar2 = FUN_006e2530(local_58), *(int *)(lVar2 + 0x18) == 0x65)) ||
      (lVar2 = FUN_006e2530(local_58), *(int *)(lVar2 + 0x18) == 0x66)))) {
    local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_0060bbf0(local_38,6);
    lVar2 = FUN_006e2530(local_58);
    if (*(int *)(lVar2 + 0x18) == 0x66) {
      lVar2 = FUN_006e2530(local_58);
      FUN_007d5cb0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x780),
                   *(undefined4 *)(lVar2 + 0x28),local_38);
    }
    else {
      lVar2 = FUN_006e2530(local_58);
      if ((*(int *)(lVar2 + 0x18) == 100) ||
         (lVar2 = FUN_006e2530(local_58), *(int *)(lVar2 + 0x18) == 0x65)) {
        local_24 = 0;
        uVar3 = FUN_006e2530(local_58);
        iVar1 = FUN_006dd8c0(uVar3);
        (**(code **)(*local_38 + 0x88))
                  (local_38,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x780) + 0x94) *
                            iVar1);
        (**(code **)(*local_38 + 0x70))
                  (local_38,*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x780) + 0x90));
        uVar3 = FUN_006e2530(local_58);
        for (local_30 = FUN_006dd580(uVar3); local_30 != 0; local_30 = FUN_006dd3e0(local_30)) {
          uVar3 = FUN_00609e10(local_38);
          local_78 = *(undefined4 *)(local_30 + 0x28);
          local_70 = 1;
          FUN_007d6c70(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x780),uVar3,local_24,0);
          local_24 = local_24 +
                     *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x780) + 0x94);
        }
      }
    }
    (**(code **)(*local_38 + 0xd8))(local_38,local_3a,&local_48,local_50);
    uVar3 = FUN_006a6030();
    FUN_006a5e10(uVar3,2,local_48);
    FUN_00410f20(local_38);
  }
  return;
}

