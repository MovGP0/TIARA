/* Ghidra address: 0172d5d0 */
/* Ghidra symbol: FUN_0172d5d0 */


void FUN_0172d5d0(longlong param_1,uint param_2,char param_3,byte param_4,longlong param_5,
                 undefined4 *param_6)

{
  char cVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 *local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53 [23];
  int local_3c;
  
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + (param_2 & 0xff) * 0x1b + 1);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_53,0x1b);
  if (local_3c != 0) {
    FUN_0172a910(*(undefined8 *)(param_1 + 8),local_3c + 1);
    FUN_01d36ef0(param_5,0,param_4 - 1);
    uVar3 = 0;
    do {
      local_60 = param_6;
      uVar2 = FUN_01d36ef0(param_5,0,(int)uVar3 + -1);
      FUN_00b909d0(&local_60,uVar2);
      FUN_0172a950(*(undefined8 *)(param_1 + 8));
      FUN_0172a910();
      cVar4 = param_3;
      do {
        cVar1 = *(char *)(param_5 + uVar3);
        if (cVar1 == '\x01') {
          FUN_0172a920(*(undefined8 *)(param_1 + 8),&local_58,4);
          *local_60 = local_58;
          FUN_00b909d0(&local_60);
        }
        else if (cVar1 == '\x02') {
          FUN_0172a920(*(undefined8 *)(param_1 + 8),&local_54,1);
          *(undefined1 *)local_60 = local_54;
          FUN_00b909d0(&local_60);
        }
        else if (cVar1 == '\x03') {
          FUN_0172a920(*(undefined8 *)(param_1 + 8),&local_54,1);
          *(undefined1 *)local_60 = local_54;
          FUN_00b909d0(&local_60);
        }
        cVar4 = cVar4 + -1;
      } while (cVar4 != '\0');
      uVar3 = (ulonglong)(byte)((char)uVar3 + 1);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return;
}

