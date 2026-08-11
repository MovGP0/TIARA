/* Ghidra address: 0084f6f0 */
/* Ghidra symbol: FUN_0084f6f0 */


void FUN_0084f6f0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x528) + 0xe0))
              (*(longlong **)(param_1 + 0x528),&local_38);
    local_50 = local_38;
    uStack_48 = uStack_30;
    local_40 = param_5;
    local_3c = param_6;
    uVar1 = FUN_00423210(&local_50,&local_40);
    pcVar2 = (code *)FUN_00411550(param_1,0xffab);
    (*pcVar2)(param_1,uVar1);
  }
  return;
}

