/* Ghidra address: 014ffa60 */
/* Ghidra symbol: FUN_014ffa60 */


void FUN_014ffa60(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  bool bVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  if (iVar1 == 1) {
    uVar2 = CONCAT71(uVar3,1);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),uVar2);
    if (*(uint *)(param_1 + 0x784) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
               ((byte)*(uint *)(param_1 + 0x784) & 0x1f) & 0x30U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0082a890(param_2,0);
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x788),1);
    }
  }
  else if (iVar1 == 2) {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),0);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),0);
    uVar2 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),0);
    if (*(uint *)(param_1 + 0x784) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
               ((byte)*(uint *)(param_1 + 0x784) & 0x1f) & 0x30U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0082a890(param_2,0);
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x788),1);
    }
  }
  else if (iVar1 == 3) {
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))
              (*(longlong **)(param_1 + 0x6e0),CONCAT71(uVar3,1));
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),1);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),0);
    uVar2 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),0);
    if (*(uint *)(param_1 + 0x784) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
               ((byte)*(uint *)(param_1 + 0x784) & 0x1f) & 0x30U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0082a890(param_2,0);
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x788),1);
    }
  }
  else if (iVar1 - 4U < 2) {
    uVar2 = CONCAT71(uVar3,1);
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x128))(*(longlong **)(param_1 + 0x708),uVar2);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),uVar2);
    if (*(uint *)(param_1 + 0x784) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) <<
               ((byte)*(uint *)(param_1 + 0x784) & 0x1f) & 0xeU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0082a890(*(undefined8 *)(param_1 + 0x788),1);
      FUN_0082a6c0(*(undefined8 *)(param_1 + 0x788),0);
    }
  }
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x788) = param_2;
  *(bool *)(param_1 + 0x742) = *(char *)(*(longlong *)(param_1 + 0x6e0) + 0x328) == '\0';
  *(bool *)(param_1 + 0x743) = *(char *)(*(longlong *)(param_1 + 0x6f0) + 0x328) == '\0';
  return;
}

