/* Ghidra address: 012af700 */
/* Ghidra symbol: FUN_012af700 */


void FUN_012af700(longlong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_29 [9];
  
  local_29[0] = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x870) + 0x11) != *param_2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x150))
              (*(longlong **)(param_1 + 0xdb8),
               CONCAT71((int7)((ulonglong)uVar3 >> 8),(char)uVar3 - *(char *)(param_1 + 0xd8c)) &
               0xffffffff,param_2);
    cVar1 = *param_2;
    lVar2 = *(longlong *)(param_1 + 0x870);
    *(char *)(lVar2 + 0x11) = cVar1;
    if (cVar1 == '\0') {
      FUN_010f6740(param_1,lVar2,0,local_29,0);
    }
    else if (*(char *)(param_1 + 0x7ed) == '\0') {
      FUN_012adda0(param_1,lVar2,1,1,0,local_29);
    }
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),1);
  }
  return;
}

