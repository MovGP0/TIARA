/* Ghidra address: 00618700 */
/* Ghidra symbol: FUN_00618700 */


char FUN_00618700(undefined8 param_1,longlong param_2,undefined4 param_3,char param_4,
                 undefined8 *param_5,char param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 in_stack_ffffffffffffffc8;
  char local_19;
  longlong local_18;
  uint local_c;
  
  uVar2 = (uint)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_18 = 0;
  if (param_7 < 1) {
    param_7 = 0;
    if (param_2 != 0) {
      param_7 = (int)*(undefined8 *)(param_2 + -8);
    }
  }
  else {
    lVar3 = 0;
    if (param_2 != 0) {
      lVar3 = *(longlong *)(param_2 + -8);
    }
    if (param_7 < lVar3) {
      lVar3 = (longlong)param_7;
    }
    param_7 = (int)lVar3;
  }
  FUN_00419260(&local_18,&DAT_006186b0,1,(longlong)param_7);
  iVar5 = 0;
  if (local_18 != 0) {
    iVar5 = (int)*(undefined8 *)(local_18 + -8);
  }
  iVar1 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      *(undefined8 *)(local_18 + (longlong)iVar1 * 8) =
           *(undefined8 *)(*(longlong *)(param_2 + (longlong)iVar1 * 8) + 8);
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_6 != '\0') {
    uVar4 = 0;
    if (local_18 != 0) {
      uVar4 = *(ulonglong *)(local_18 + -8);
    }
    iVar5 = FUN_00618380(param_4 != '\0',param_3,uVar4 & 0xffffffff,local_18,&local_c);
    if (iVar5 == -0x7ffefeeb) {
      local_19 = '\x04';
    }
    else if (iVar5 == -0x7ffefee1) {
      local_19 = '\x01';
    }
    else if (iVar5 == 0) {
      local_19 = '\0';
    }
    else {
      local_19 = '\x03';
    }
    if ((param_4 == '\0') && (local_19 == '\0')) {
      *param_5 = *(undefined8 *)(param_2 + (ulonglong)local_c * 8);
    }
    else {
      *param_5 = 0;
    }
    goto code_r0x00618938;
  }
  uVar4 = 0;
  if (local_18 != 0) {
    uVar4 = *(ulonglong *)(local_18 + -8);
  }
  uVar2 = thunk_FUN_0413f31b(uVar4 & 0xffffffff,local_18,-(uint)(param_4 != '\0'),param_3,
                             (ulonglong)uVar2 << 0x20);
  if ((int)uVar2 < 0x80) {
    if (uVar2 == 0xffffffff) {
      local_19 = '\x03';
      goto code_r0x00618938;
    }
    if (uVar2 < 0x40) {
      local_19 = '\0';
      *param_5 = *(undefined8 *)(param_2 + (ulonglong)uVar2 * 8);
      goto code_r0x00618938;
    }
  }
  else {
    if (uVar2 - 0x80 < 0x40) {
      local_19 = '\x02';
      *param_5 = *(undefined8 *)(param_2 + (ulonglong)(uVar2 - 0x80) * 8);
      goto code_r0x00618938;
    }
    if (uVar2 == 0xc0) {
      local_19 = '\x04';
      goto code_r0x00618938;
    }
    if (uVar2 == 0x102) {
      local_19 = '\x01';
      goto code_r0x00618938;
    }
  }
  local_19 = '\x03';
code_r0x00618938:
  FUN_00419430(&local_18,&DAT_006186b0);
  return local_19;
}

