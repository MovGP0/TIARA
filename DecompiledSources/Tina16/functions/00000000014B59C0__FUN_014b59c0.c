/* Ghidra address: 014b59c0 */
/* Ghidra symbol: FUN_014b59c0 */


void FUN_014b59c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 local_19;
  
  FUN_014b4920(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x7a0) + 0x80) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x838) + 0x4a0);
  }
  uVar3 = 0;
  FUN_00ee4600(1,*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x4e8),
               *(undefined8 *)(param_1 + 0x8b0),0,0,0,1,*(undefined8 *)(param_1 + 0x878),0,0,0,0,0xf
               ,0,0,uVar2,0,&local_19,&local_19,&local_19);
  FUN_016cedb0(*(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0xe70),
               *(undefined8 *)(param_1 + 0x8c8));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_019a9ed0(*(undefined8 *)(param_1 + 0x8b0),PTR_DAT_02003e38,*PTR_DAT_02004638,*PTR_DAT_020044c8
               ,2,*(undefined8 *)(*(longlong *)(param_1 + 0x838) + 0x4a0),uVar3 & 0xffffff00,0xf);
  FUN_014b49a0(param_1);
  return;
}

