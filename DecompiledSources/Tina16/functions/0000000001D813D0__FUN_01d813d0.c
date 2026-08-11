/* Ghidra address: 01d813d0 */
/* Ghidra symbol: FUN_01d813d0 */


void FUN_01d813d0(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0xae0) + 0x11) != *param_2) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x260))(*(longlong **)(param_1 + 0x918))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x150))
              (*(longlong **)(param_1 + 0xa88),
               CONCAT71((int7)((ulonglong)uVar1 >> 8),(char)uVar1 - *(char *)(param_1 + 0xa5c)) &
               0xffffffff,param_2);
    *(char *)(*(longlong *)(param_1 + 0xae0) + 0x11) = *param_2;
  }
  return;
}

