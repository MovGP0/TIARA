/* Ghidra address: 0129d760 */
/* Ghidra symbol: FUN_0129d760 */


void FUN_0129d760(undefined8 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar1 = *(undefined1 *)(param_1 + 4);
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)*param_2;
    *puVar5 = *param_1;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    *(undefined1 *)(puVar5 + 4) = uVar1;
    *param_2 = 0;
  }
  return;
}

