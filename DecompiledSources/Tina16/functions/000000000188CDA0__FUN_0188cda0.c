/* Ghidra address: 0188cda0 */
/* Ghidra symbol: FUN_0188cda0 */


longlong FUN_0188cda0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar4;
  FUN_0188d5b0(local_res8);
  lVar1 = *(longlong *)(local_res8 + 0x20);
  if (*(int *)(lVar1 + 0x10) == 0) {
    uVar4 = FUN_0180bfb0();
    FUN_01809b60(uVar4,&local_28,L"prVirtual");
    uVar4 = FUN_0188b5c0(&PTR_FUN_0188a120,1,local_28,0);
    FUN_004ae7e0(lVar1,uVar4);
    *(undefined1 *)(local_res8 + 8) = 0;
    FUN_0188d0f0(local_res8,0);
  }
  else {
    *(undefined1 *)(local_res8 + 8) = 1;
    FUN_0188d1b0(local_res8,&local_38);
    FUN_0043ea00(&local_30,local_38);
    uVar3 = FUN_0188d050(local_res8,local_30);
    FUN_0188d0f0(local_res8,uVar3);
    if (*(int *)(local_res8 + 0x18) == -1) {
      FUN_0188d0f0(local_res8,0);
    }
  }
  FUN_00414560(&local_38,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

