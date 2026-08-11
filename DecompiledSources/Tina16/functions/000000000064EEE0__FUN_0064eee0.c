/* Ghidra address: 0064eee0 */
/* Ghidra symbol: FUN_0064eee0 */


char FUN_0064eee0(longlong param_1,undefined2 param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  char local_31;
  undefined8 local_30 [2];
  
  local_30[0] = *param_4;
  local_31 = '\0';
  if (*(longlong *)(param_1 + 600) != 0) {
    (**(code **)(param_1 + 600))
              (*(undefined8 *)(param_1 + 0x260),param_1,param_2,param_3,local_30,&local_31);
  }
  if (local_31 == '\0') {
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + param_3;
    while( true ) {
      uVar1 = *(uint *)(param_1 + 0x110);
      iVar3 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
      if (iVar3 < 0x78) break;
      iVar3 = iVar3 + -0x78;
      *(int *)(param_1 + 0x110) = iVar3;
      if ((int)uVar1 < 0) {
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x110) = -iVar3;
        }
        pcVar2 = (code *)FUN_00411550(param_1,CONCAT62((uint6)(ushort)((int)uVar1 >> 0x1f),0xffe1));
        local_31 = (*pcVar2)(param_1,param_2,local_30);
      }
      else {
        pcVar2 = (code *)FUN_00411550(param_1,CONCAT62((uint6)(ushort)((int)uVar1 >> 0x1f),0xffe0));
        local_31 = (*pcVar2)(param_1,param_2,local_30);
      }
    }
  }
  return local_31;
}

