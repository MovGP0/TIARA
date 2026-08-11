/* Ghidra address: 01662ae0 */
/* Ghidra symbol: FUN_01662ae0 */


void FUN_01662ae0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_res10;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_90 = auStack_b8;
  lVar3 = FUN_0041f930();
  if (*(int *)(*(longlong *)(lVar3 + 0x288) + 0x18) != 100000000) {
    if (param_1 == 0) {
      lVar3 = FUN_0041f930();
      local_68 = *(longlong *)(*(longlong *)(lVar3 + 0x288) + 0x1f0);
      local_70 = local_68;
      if (local_68 != 0) {
        local_70 = *(longlong *)(local_68 + -8);
      }
      lVar3 = FUN_0041f930();
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x288) + 0x1f8);
      if (local_70 <= iVar2) {
        lVar3 = FUN_0041f930();
        FUN_00419260(*(longlong *)(lVar3 + 0x288) + 0x1f0,&DAT_0165b9d0,1,
                     (longlong)(iVar2 * 2 + 1000));
      }
      lVar3 = FUN_0041f930();
      lVar4 = FUN_0041f930();
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x288) + 0x1f0) +
       (longlong)*(int *)(*(longlong *)(lVar4 + 0x288) + 0x1f8) * 0x10) = param_2;
      lVar3 = FUN_0041f930();
      lVar4 = FUN_0041f930();
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x288) + 0x1f0) + 8 +
       (longlong)*(int *)(*(longlong *)(lVar4 + 0x288) + 0x1f8) * 0x10) = 0;
      lVar3 = FUN_0041f930();
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x288) + 0x1f8);
      *piVar1 = *piVar1 + 1;
    }
    else if (param_1 == 0xc) {
      lVar3 = FUN_0041f930();
      local_res10 = (undefined4)param_2;
      *(undefined4 *)(*(longlong *)(lVar3 + 0x288) + 0x1e4) = local_res10;
      lVar3 = FUN_0041f930();
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x288) + 0x1e8);
      *piVar1 = *piVar1 + 1;
    }
    else if (param_1 == 0xd) {
      lVar3 = FUN_0041f930();
      *(undefined4 *)(*(longlong *)(lVar3 + 0x288) + 0x1e4) = 0;
    }
    else {
      lVar3 = FUN_0041f930();
      local_78 = *(longlong *)(*(longlong *)(lVar3 + 0x288) + 0x1d8);
      local_80 = local_78;
      if (local_78 != 0) {
        local_80 = *(longlong *)(local_78 + -8);
      }
      lVar3 = FUN_0041f930();
      if (local_80 <= *(int *)(*(longlong *)(lVar3 + 0x288) + 0x1e0)) {
        local_58[0] = 0x40;
        thunk_FUN_0420cff5(local_58);
        local_60 = local_48;
        lVar3 = FUN_0041f930();
        if (local_60 < (ulonglong)((longlong)*(int *)(*(longlong *)(lVar3 + 0x288) + 0x1e0) * 0x380)
           ) {
          uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"not enough memory");
          FUN_004134c0(uVar5);
        }
        lVar3 = FUN_0041f930();
        lVar4 = FUN_0041f930();
        FUN_00419260(*(longlong *)(lVar3 + 0x288) + 0x1d8,&DAT_0165b988,1,
                     (longlong)(*(int *)(*(longlong *)(lVar4 + 0x288) + 0x1e0) * 2 + 1000));
      }
      lVar3 = FUN_0041f930();
      lVar4 = FUN_0041f930();
      *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x288) + 0x1d8) +
              (longlong)*(int *)(*(longlong *)(lVar4 + 0x288) + 0x1e0) * 0x70) = param_1;
      lVar3 = FUN_0041f930();
      lVar4 = FUN_0041f930();
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x288) + 0x1d8) + 8 +
       (longlong)*(int *)(*(longlong *)(lVar4 + 0x288) + 0x1e0) * 0x70) = param_2;
      lVar3 = FUN_0041f930();
      lVar4 = FUN_0041f930();
      lVar6 = FUN_0041f930();
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x288) + 0x1d8) + 0x40 +
       (longlong)*(int *)(*(longlong *)(lVar6 + 0x288) + 0x1e0) * 0x70) =
           *(undefined4 *)(*(longlong *)(lVar3 + 0x288) + 0x1e8);
      lVar3 = FUN_0041f930();
      lVar4 = FUN_0041f930();
      lVar6 = FUN_0041f930();
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x288) + 0x1d8) + 0x3c +
       (longlong)*(int *)(*(longlong *)(lVar6 + 0x288) + 0x1e0) * 0x70) =
           *(undefined4 *)(*(longlong *)(lVar3 + 0x288) + 0x1e4);
      lVar3 = FUN_0041f930();
      lVar4 = FUN_0041f930();
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x288) + 0x1d8) + 0x50 +
       (longlong)*(int *)(*(longlong *)(lVar4 + 0x288) + 0x1e0) * 0x70) = 0;
      lVar3 = FUN_0041f930();
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x288) + 0x1e0);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}

