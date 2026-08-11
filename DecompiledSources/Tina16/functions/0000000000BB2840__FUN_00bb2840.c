/* Ghidra address: 00bb2840 */
/* Ghidra symbol: FUN_00bb2840 */


void FUN_00bb2840(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  undefined8 local_30 [2];
  short local_1a;
  
  local_30[0] = 0;
  cVar2 = '\0';
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          cVar1 = (**(code **)(*param_3 + 0x60))(param_3,&local_1a);
          if (cVar1 == '\0') goto LAB_00bb2931;
          if (cVar2 != '\0') break;
          if (local_1a == 0x2d) {
            cVar2 = '\x01';
          }
          else {
            (**(code **)(*param_3 + 0x70))(param_3,local_1a);
          }
        }
        if (cVar2 != '\x01') break;
        if (local_1a == 0x2d) {
          cVar2 = '\x02';
        }
        else {
          (**(code **)(*param_3 + 0x70))(param_3,0x2d);
          (**(code **)(*param_3 + 0x70))(param_3,local_1a);
          cVar2 = '\0';
        }
      }
      if (cVar2 == '\x02') break;
      (**(code **)(*param_3 + 0x70))(param_3,local_1a);
      cVar2 = '\0';
    }
  } while (local_1a != 0x3e);
  (**(code **)(*param_3 + 0x78))(param_3,local_30);
  (**(code **)(*param_1 + 0x18))(param_1,local_30[0]);
LAB_00bb2931:
  FUN_00414480(local_30);
  return;
}

