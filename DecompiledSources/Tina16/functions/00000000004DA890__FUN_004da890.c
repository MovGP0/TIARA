/* Ghidra address: 004da890 */
/* Ghidra symbol: FUN_004da890 */


undefined8 * FUN_004da890(longlong param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint local_58 [2];
  undefined1 local_50;
  ulonglong local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  lVar3 = FUN_004afee0(&DAT_00474160,1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x20;
  }
  FUN_0041b840(param_2,lVar3);
  uVar4 = FUN_0041b800(local_30);
  cVar1 = FUN_004e3210(*(undefined8 *)(param_1 + 8),param_3,uVar4);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*local_30[0] + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_30[0] + 0x18))(local_30[0],&local_40,iVar5);
        uVar4 = FUN_0041b800(&local_38);
        cVar1 = FUN_00452340(local_40,&DAT_004daa6c,uVar4);
        if ((cVar1 != '\0') && (cVar1 = (**(code **)(*local_38 + 0x20))(local_38), cVar1 != '\0')) {
          (**(code **)(*local_30[0] + 0x18))(local_30[0],&local_48,iVar5);
          (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,local_48);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2);
  if (iVar2 == 0) {
    local_50 = 0;
    local_58[0] = param_3;
    uVar4 = FUN_0044d8d0(&PTR_FUN_00485650,1,PTR_PTR_020011c8,local_58,0);
    FUN_004134c0(uVar4);
  }
  FUN_00417840(&local_48,&DAT_004033c8,2);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  return param_2;
}

