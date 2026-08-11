/* Ghidra address: 01c3d610 */
/* Ghidra symbol: FUN_01c3d610 */


void FUN_01c3d610(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820));
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),1);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),1);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),1);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x128))
              (*(longlong **)(param_1 + 0x8a0),
               CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))
              (*(longlong **)(param_1 + 0x700),
               CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))
              (*(longlong **)(param_1 + 0x708),
               CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))
              (*(longlong **)(param_1 + 0x710),
               CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x128))
              (*(longlong **)(param_1 + 0x8a0),
               CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))
              (*(longlong **)(param_1 + 0x720),
               CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x128))
              (*(longlong **)(param_1 + 0x730),
               CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x890) + 0x128))
              (*(longlong **)(param_1 + 0x890),
               CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 == '\0') & 0xffffffff);
  }
  FUN_01c437c0(param_1);
  FUN_01c43750(param_1,param_2);
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    FUN_01c38160(param_1);
  }
  return;
}

