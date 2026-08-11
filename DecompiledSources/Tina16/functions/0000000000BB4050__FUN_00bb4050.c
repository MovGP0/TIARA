/* Ghidra address: 00bb4050 */
/* Ghidra symbol: FUN_00bb4050 */


undefined8 FUN_00bb4050(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50 [2];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_60 = (longlong *)0x0;
  local_50[0] = (longlong *)0x0;
  local_30[0] = 0;
  local_38 = 0;
  local_68 = FUN_0045ae90();
  cVar1 = FUN_00baeff0(*(undefined8 *)(param_1 + 0x70));
  if (cVar1 != '\0') {
    FUN_00baec70(*(undefined8 *)(param_1 + 0x70),local_50);
    iVar2 = (**(code **)(*local_50[0] + 0x18))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00baec70(*(undefined8 *)(param_1 + 0x70),&local_60);
        (**(code **)(*local_60 + 0x20))(local_60,&local_58,iVar4);
        uVar3 = FUN_0041b800(local_30);
        cVar1 = FUN_00452340(local_58,&DAT_00bb41e4,uVar3);
        if (cVar1 != '\0') {
          FUN_0041b840(&local_38,local_30[0]);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if ((local_38 != 0) && (cVar1 = FUN_00bac410(local_38,&local_40), cVar1 != '\0')) {
    local_68 = local_40;
  }
  FUN_0041b800(&local_60);
  FUN_0041b800(&local_58);
  FUN_0041b800(local_50);
  FUN_00417840(&local_38,&DAT_00b9fb88,2);
  return local_68;
}

