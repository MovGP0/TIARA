/* Ghidra address: 01bd9890 */
/* Ghidra symbol: FUN_01bd9890 */


/* WARNING: Removing unreachable block (ram,0x01bd99c6) */
/* WARNING: Removing unreachable block (ram,0x01bd99e3) */

undefined8 FUN_01bd9890(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_30;
  
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  thunk_FUN_04125dff(param_4);
  *(undefined2 *)param_4 = 3;
  uVar4 = 1;
  lVar3 = *(longlong *)(param_1 + 0x18);
  cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01bee940);
  if (cVar1 == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x18);
    cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01bf1690);
    if ((cVar1 == '\0') || (*(longlong *)(lVar3 + 0x80) == 0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
      local_50 = param_2;
      local_4c = param_3;
      local_60[0] = FUN_0064d3a0(uVar4,&local_50);
      lVar3 = FUN_00656230(uVar4,local_60,1,0,0);
      iVar2 = FUN_004b1870(*(undefined8 *)(lVar3 + 800));
      FUN_004685b0(param_4,iVar2 + 1,0xfffffffffffffffc);
      uVar4 = 0;
    }
  }
  else {
    local_48 = param_2;
    local_44 = param_3;
    local_30 = FUN_0064d3a0(*(undefined8 *)(lVar3 + 0x18),&local_48);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
    if (lVar3 != 0) {
      iVar2 = FUN_004b1870(*(undefined8 *)(lVar3 + 800));
      FUN_004685b0(param_4,iVar2 + 1,0xfffffffffffffffc);
      uVar4 = 0;
    }
  }
  return uVar4;
}

