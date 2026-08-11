/* Ghidra address: 004dae00 */
/* Ghidra symbol: FUN_004dae00 */


undefined1 FUN_004dae00(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_41;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_40 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  *param_3 = 0;
  uVar3 = FUN_0041b800(&local_38);
  cVar1 = FUN_004e3210(*(undefined8 *)(param_1 + 8),param_2,uVar3);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*local_38 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_38 + 0x18))(local_38,&local_40,iVar4);
        uVar3 = FUN_0041b800(local_30);
        cVar1 = FUN_00452340(local_40,&DAT_004daf50,uVar3);
        if ((cVar1 != '\0') &&
           (cVar1 = (**(code **)(*local_30[0] + 0x20))(local_30[0]), cVar1 != '\0')) {
          FUN_0041b840(param_3,local_30[0]);
          local_41 = 1;
          goto LAB_004daeea;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  local_41 = 0;
LAB_004daeea:
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  return local_41;
}

