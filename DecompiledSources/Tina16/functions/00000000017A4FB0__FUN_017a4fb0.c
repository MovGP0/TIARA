/* Ghidra address: 017a4fb0 */
/* Ghidra symbol: FUN_017a4fb0 */


void FUN_017a4fb0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  int local_34;
  undefined8 local_30;
  undefined8 local_28 [3];
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_28[0] = 0;
  local_30 = 0;
  local_50 = *(longlong *)(param_1 + 8);
  local_58 = *(longlong **)(local_50 + 0xd48);
  FUN_00414b50(local_28,*(undefined8 *)(*(longlong *)(local_50 + 0xc40) + 0x100));
  FUN_00414b50(&local_30,*(undefined8 *)(*(longlong *)(local_50 + 0xc40) + 0xe0));
  FUN_0177dd40(local_58,&LAB_017a5348);
  FUN_00414ad0(local_58 + 0x1c,*(undefined8 *)(*(longlong *)(local_50 + 0xc40) + 0xe0));
  FUN_0177d560(local_58,*(undefined8 *)(local_50 + 0xd38));
  cVar1 = (**(code **)(*local_58 + 0xa8))(local_58);
  if (cVar1 != '\0') {
    local_60 = *(undefined8 *)(param_1 + 0x6f0);
    lVar3 = FUN_006e2530(local_60);
    if ((lVar3 != 0) &&
       (((lVar3 = FUN_006e2530(local_60), *(int *)(lVar3 + 0x18) == 100 ||
         (lVar3 = FUN_006e2530(local_60), *(int *)(lVar3 + 0x18) == 0x65)) ||
        (lVar3 = FUN_006e2530(local_60), *(int *)(lVar3 + 0x18) == 0x66)))) {
      local_48 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060bbf0(local_48,6);
      lVar3 = FUN_006e2530(local_60);
      if (*(int *)(lVar3 + 0x18) == 0x66) {
        lVar3 = FUN_006e2530(local_60);
        FUN_007d5cb0(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(lVar3 + 0x28),local_48);
      }
      else {
        lVar3 = FUN_006e2530(local_60);
        if ((*(int *)(lVar3 + 0x18) == 100) ||
           (lVar3 = FUN_006e2530(local_60), *(int *)(lVar3 + 0x18) == 0x65)) {
          local_34 = 0;
          uVar4 = FUN_006e2530(local_60);
          iVar2 = FUN_006dd8c0(uVar4);
          (**(code **)(*local_48 + 0x88))
                    (local_48,*(int *)(*(longlong *)(param_1 + 0x780) + 0x94) * iVar2);
          (**(code **)(*local_48 + 0x70))
                    (local_48,*(undefined4 *)(*(longlong *)(param_1 + 0x780) + 0x90));
          uVar4 = FUN_006e2530(local_60);
          for (local_40 = FUN_006dd580(uVar4); local_40 != 0; local_40 = FUN_006dd3e0(local_40)) {
            uVar4 = FUN_00609e10(local_48);
            local_88 = *(undefined4 *)(local_40 + 0x28);
            local_80 = 1;
            FUN_007d6c70(*(undefined8 *)(param_1 + 0x780),uVar4,local_34,0);
            local_34 = local_34 + *(int *)(*(longlong *)(param_1 + 0x780) + 0x94);
          }
        }
      }
      FUN_00724270(local_58,&local_78);
      (**(code **)(*local_48 + 0xb0))(local_48,local_78);
      FUN_00410f20(local_48);
    }
  }
  FUN_0177dd40(local_58,local_28[0]);
  FUN_00414ad0(local_58 + 0x1c,local_30);
  FUN_00414480(&local_78);
  FUN_00414560(&local_30,2);
  return;
}

