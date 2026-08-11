/* Ghidra address: 01b4a690 */
/* Ghidra symbol: FUN_01b4a690 */


void FUN_01b4a690(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  
  uVar3 = FUN_01544140(&DAT_01543448,1,param_2,*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar3 = FUN_01b4a620(param_1,param_2);
  FUN_01544810(*(undefined8 *)(param_1 + 0x30),uVar3);
  FUN_01544430(*(undefined8 *)(param_1 + 0x30),uVar3);
  FUN_01544640(*(undefined8 *)(param_1 + 0x30));
  FUN_01544ae0(*(undefined8 *)(param_1 + 0x30));
  lVar1 = *(longlong *)(param_1 + 0x30);
  do {
    lVar4 = FUN_01544580(lVar1);
    *(longlong *)(lVar1 + 0x20) = lVar4;
    if (lVar4 == 0) break;
    local_28 = FUN_01544650(lVar1,lVar4);
    *(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 0x14) = 2;
    cVar2 = FUN_015448b0(lVar1,local_28,&local_20);
    if (cVar2 != '\0') {
      FUN_01544450(lVar1,local_20);
    }
    FUN_01b4a650(auStack_48);
    cVar2 = FUN_015444b0(*(undefined8 *)(param_1 + 0x30));
  } while (cVar2 != '\0');
  FUN_01544ff0(*(undefined8 *)(param_1 + 0x30));
  FUN_01545080(*(undefined8 *)(param_1 + 0x30),0);
  FUN_01545270(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x30));
  return;
}

